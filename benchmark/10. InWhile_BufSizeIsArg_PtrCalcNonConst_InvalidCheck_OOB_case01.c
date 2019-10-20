/*
HCSEC-3243-0047
zxb
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

//InWhile_BufSizeIsArg_PtrCalcWithNonConst_InvalidCheck_OOB_case1
//While循环体内，缓冲区长度为参数，非常数指针运算，校验不足导致OOB Y

typedef unsigned char   UINT8;
typedef unsigned char   UCHAR;
typedef unsigned short  UINT16;
typedef unsigned int    UINT32;

typedef struct{
    UINT8 ucIeType;
    UINT16 uwIeLen;
}MY_MSG;

UINT32  testcase01(void *pData, UINT32 udwLen, UINT8 *pucMyValue)
{
    UINT32 udwIeOffset = 0;
    MY_MSG *pMY = NULL;
 
    *pucMyValue = 0;

    while (udwIeOffset < udwLen)
    {
        // VULN: The loop clause only ensures that pData is within the bounds of the outer
        //        size, this means it ensures 1 byte is available. It does not check that you can
        //        read sizeof(MY_MSG) bytes from it. Therefore the cast and read below
        //        will trigger an OOB read.

        pMY = (MY_MSG*)((UINT8 *)pData + udwIeOffset);
        if(0xFF == pMY->ucIeType)
        {
            /*POTENTIAL FLAW: 当udwIeOffset少于udwLen 1个字节时，这里会产生OOB*/
            *pucMyValue = (UINT8)(*((UINT8 *)pMY + sizeof(MY_MSG)));
            return 0;
        }
        else
        {
            udwIeOffset += sizeof(MY_MSG) + pMY->uwIeLen ;
        }
    }

    return 0;  
}


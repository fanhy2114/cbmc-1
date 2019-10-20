/*
 * 3131-0025
 */

#include <stdlib.h>
#include <stdio.h>

#define TRUE 1
#define FALSE 0
typedef unsigned char UINT8;
typedef int INT32;
typedef unsigned int  UINT32;

//InWhile_BufSizeIsArg_PtrCalcNonConst_InvalidCheck_OOB_case1
//While循环内，BufSize为参数，非常数指针运算，校验不足导致OOB Y
UINT32 TestCase_Bad01(UINT8 *pucMsg, UINT32 ulMsgLen, UINT8 *pucCRC)
{
    UINT8 * pData = pucMsg;
    UINT32 ulProcLen = 0;
	UINT8 ucOptionType;
	UINT8 ucOptionLen;

    if(ulMsgLen <= 2) {
		return FALSE;
	}

    pData += 2;
    ulProcLen += 2;

	/* When ulProcLen == ulMsgLen - 1, pData points to last byte in buffer. */
    while (ulProcLen < ulMsgLen) {      
        ucOptionType = *pData >> 4;
        ucOptionLen = *pData & 0x0F;

        if(1 == ucOptionType) {
            *pucCRC = *(pData + 1);
			/* POTENTIAL FLAW: If pData points to last byte in buffer, 
			pData + 1 points past end of buffer and this value is being modified. */
            *(pData + 1) = 0;
            return TRUE;
        }
 
        pData += (ucOptionLen + 1);
        ulProcLen += (ucOptionLen + 1);
    }

    return FALSE;
}



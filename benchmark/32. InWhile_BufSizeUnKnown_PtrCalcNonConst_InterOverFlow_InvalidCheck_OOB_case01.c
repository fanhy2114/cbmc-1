/*
*author:ywx445873 yuchunhua
*CSEC����:3244-0018
*/


#include <stdlib.h>
#include <stdio.h>
typedef  unsigned char UCHAR;
typedef unsigned int UINT32;
typedef unsigned long  ULONG;

#define HEADER_LEN_S 10
//InWhile_BufSizeUnKnown_PtrCalcNonConst_InterOverFlow_InvalidCheck_OOB_case01
//While循环体内，BufSize未知，非常数指针运算，偏移量运算整数溢出，校验不足,导致OOB N
ULONG DecodeHead(UCHAR* pucHeader, UCHAR* pucHeaderTLen)
{
    UCHAR ucNHdType;
    UCHAR ucNHdLen;
	UCHAR *pucData;
	UINT32 ucNHdTotalLen = 0;

    switch (*pucHeader)
    {
        case 0x03:
            break;
        default:
        {
            pucData = pucHeader + HEADER_LEN_S;
            ucNHdType = *(pucData-1);

            while (0 != ucNHdType)
            {
                ucNHdLen = (*pucData) << 2;
                ucNHdTotalLen += ucNHdLen;
                
                if (ucNHdTotalLen > 20 || 0 == ucNHdLen)
                {
                    return 0;
                }
                else
                {
                    pucData += ucNHdLen;
                    ucNHdType = *(pucData-1);
                }
            }
        }
    }
	return 1;
}
/*In here, the while loop iterates through the extension headers calculating the size. 
During the iteration, it doesn’t check whether this fits into the size of the external outer message, 
and also the total count is an 8 bit number which is easy to overflow, causing an out of bounds read. 
For example. if the first extension header was 20 bytes long, and the next one was 252 bytes, 
ucNHdTotalLen would be overflowed and would be 16, allowing the loop to continue. 
This firstly breaks the logic of this loop as we can now have extension headers > 20 bytes which goes past what this was intended for. 
Also as this doesn’t do any external length checks, it can cause an OOB read and continue the parsing down the heap which may lead to a segmentation fault
*/


/*
 * Issue No: 3131-0028
 * Author: yuchunhua/445873
 * Date: 2019/03/25
 */

#include <stdlib.h>
#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef unsigned char UINT8;
typedef int INT32;
typedef unsigned int  UINT32;
typedef unsigned short  UINT16;

//BufSizeIsArg_PtrCalcConst_NoCheck_OOB_case02
//BufSize为参数，非常数指针运算，未校验不足导致OOB  Y

#define MYXXXHEAD  10

UINT32 XXXX_YYYYProc(UINT8 *pucCompData, UINT16 usCompDataLen)
{
	UINT8 *pucTempData = pucCompData;
    INT32 lRemainLen = (INT32)usCompDataLen;

	/*POTENTIAL FLAW:The while-loop skips over the padding bytes at the front of the packet.
     If a non-padding byte is detected the loop is exited and a check is made to see if the end of incoming packet has been passed. */
    while(MYXXXHEAD == *pucTempData)
    {
        pucTempData++;   
        lRemainLen--;
    }
    if(0 > lRemainLen)    // If this is true then OOB has occurred
    {
        return FALSE;
    }
	return TRUE;
}


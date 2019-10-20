/*
 * Issue No: 3243-0049
 * Author: renjinsong/369861
 * Date: 2019/04/02
 */

 //------------------------------
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef char INT8;
typedef unsigned char UINT8;
typedef unsigned short UINT16;
typedef unsigned int  UINT32;

UINT32 Strlen(UINT8 *str);
UINT8 *XX_StrStr(UINT8 *str, INT8 *subStr);

//IndoWhile_BufSizeIsUnknow_PtrCalcNonConst_NoCheck_StrProc_OOB_case01
//DoWhile循环内，BufSize未知，非常数指针运算，字符串判断未校验, 导致字符串访问OOB  N
UINT32 ParseString(UINT8 *pucIvList, UINT8 *pucIvCnt, UINT32 udwEnbId)
{
	UINT32  udwStrLen = 0;
	UINT32  i = 0;
	UINT8   *pucEnbIdStart = pucIvList;
	UINT8   *pucEnbIdEnd = pucIvList;
	INT8    acTemp[] = "$";

	*pucIvCnt = 0;
	// event 1: Consider the string "0", udwStrLen == 1
	udwStrLen = strlen(pucIvList);
	if (0 == udwStrLen) {
		return 1;
	}

	// event 2: Passes through this as 0 is a valid character
	for (i = 0; i < udwStrLen; i++) {
		if ((('0' > pucIvList[i]) || ('9' < pucIvList[i])) && ('&' != pucIvList[i])) {
			return 1;
		}
	}

	// event 3: pucEnbIdStart would be NULL because && won't exist, pucIvList[0] is '0' so that is ok.
	pucEnbIdStart = (UINT8 *)strstr(pucIvList, "&&");
	if ((NULL != pucEnbIdStart) || ('&' == pucIvList[0])) {
		return 1;
	}

	if ('&' != pucIvList[udwStrLen - 1]) {
		// event 3: We would enter this line here because it doesn't end with an '&'... and here the
		//          zero terminator is removed.
		//          Note: This is NOT considered an out of bounds write because there should be zero
		//             terminator here.
		pucIvList[udwStrLen] = '&';
	}

	do {
		if (0 == *pucIvCnt) {
			// event 4: As this is the first iteration, this would occur
			pucEnbIdStart = pucIvList;
		}
		else {
			pucEnbIdStart = pucEnbIdEnd + 1;
		}

		// event 5: This is nearly an out-of-bounds read, however because the & has been
		//       put in place of the zero terminator, at the end of the buffer, this will 
		//       be found, and pucEnbIdEnd will point right at the end of the buffer. Any
		//       reading from here is an out-of-bounds read.
		pucEnbIdEnd = (UINT8 *)strstr(pucEnbIdStart, "&");
		if (NULL == pucEnbIdEnd) {
			break;
		}

		// Potential Flaw: XX_StrStr relies on a zero terminator... it has been removed, therefore OOB reading
		//        will occur until it sees a & or segmentation faults.
		if (NULL != strstr(pucEnbIdEnd, acTemp)) {
			return 1;
		}
	} while (udwStrLen--);

	return 0;
}


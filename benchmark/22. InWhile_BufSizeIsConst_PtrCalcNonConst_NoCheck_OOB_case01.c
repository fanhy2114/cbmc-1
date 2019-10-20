/*
 * Issue No: 3230-0050
 * Author: renjingsong/00369861
 * Date: 2019/04/03
 */

#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_LEN_XXPREFIX 30
#define XX_PREFIX_MAX_LEN 20

typedef struct {
	unsigned int ulPrefixLength;
}IV_PREFIX;

//InWhile_BufSizeIsConst_PtrCalcWithNonConst_InvalidCheck_OOB_case01
//While循环内，BufSize为常数，非常数指针运算，未校验OOB导致  Y

void XX_GetPrefixFromString(void *pData, void *pBuffer, int usValueLen)
{
    IV_PREFIX *pstIvPrefix;
    char szXPreFix[MAX_LEN_XXPREFIX + 4];
    char *pcEnd;
    char *pcPrefixSpliter;
    char *pStrBuff = (char *)pBuffer;
    pstIvPrefix = (IV_PREFIX *)pData;
     
    pcEnd = pStrBuff + (strlen(pStrBuff) - 1);
    pcPrefixSpliter = pStrBuff;
    while (pcPrefixSpliter <= pcEnd) {
        if ('/' == *pcPrefixSpliter) {
            break;
        }

        pcPrefixSpliter++;
    }
    
    if (pcPrefixSpliter >= pcEnd) {
        pstIvPrefix->ulPrefixLength = XX_PREFIX_MAX_LEN;
    }
    else {
        pstIvPrefix->ulPrefixLength = (unsigned int)atoi(pcPrefixSpliter + 1);
        if (pstIvPrefix->ulPrefixLength > XX_PREFIX_MAX_LEN) {
            return;
        }
    }

    memcpy_s(szXPreFix, sizeof(szXPreFix), pStrBuff, (unsigned int)(pcPrefixSpliter - pStrBuff));
    
    // Potential Flaw: Out-of-bounds write. szXPreFix is 34 characters long. Therefore if pcPrefixSplitter is more then 34 characters away from pStrBuff, 
    // then (pcPrefixSpliter - pStrBuff) calculates the offset based on the input string, itt will be >34 which would be an invalid index into szXPreFix, 
    // hence OOB Write.
    szXPreFix[pcPrefixSpliter - pStrBuff] = '\0';
}


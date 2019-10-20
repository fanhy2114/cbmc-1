#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
//InWhile_SpecilPath_BufSizeIsArg_PtrCalcNonConst_InvalidCheck_Underflow_OOB_case01
//While循环内特殊退出条件，缓冲区长度为常数，非常数指针运算，校验不足，缓冲区下溢 Y

typedef unsigned char   UCHAR;
typedef unsigned short  USHORT;
typedef unsigned int    ULONG;

#define URL_MAX_LENGTH  100

typedef struct {

    char  szURL[URL_MAX_LENGTH + 1];

}MY_DATA;


extern void strncpy_s(char *, int, char *, int);

ULONG testCase (UCHAR ucIsSuffix, UCHAR **ppszUrl, MY_DATA *pstInfoData)
{
    ULONG ulStrLen = 0;
    ULONG ulPos = 0xFFFFFFFF;
    UCHAR *pucTmpChr = *ppszUrl;
    UCHAR *pszTargetUrl = pstInfoData->szURL;

    memset(pszTargetUrl, 0, URL_MAX_LENGTH + 1);
    while (*pucTmpChr)
    {
        if (',' == *pucTmpChr)
        {
            // ulStrLen 不自增
            pucTmpChr++;
            break;
        }
        else if ('/' == *pucTmpChr)
        {
            ulPos = ulStrLen;
        }

        ulStrLen++;
        pucTmpChr++;
    }

    if (URL_MAX_LENGTH < ulStrLen)
    {
        ulStrLen = URL_MAX_LENGTH;
    }

    (void)strncpy_s(pszTargetUrl, URL_MAX_LENGTH + 1, *ppszUrl, URL_MAX_LENGTH);
    *(pszTargetUrl + URL_MAX_LENGTH) = '\0';

    if ((0 == ucIsSuffix)
        &&(0xFFFFFFFF == ulPos)
        /* POTENTIAL FLAW: ulStrLen 可能为0， 则此处表达式可能出现-1的OOB下溢 */
        && ('*' == *(pszTargetUrl + ulStrLen - 1))
        && (URL_MAX_LENGTH > (ulStrLen + 2)))
    {
        *(pszTargetUrl + ulStrLen) = '/';
        *(pszTargetUrl + ulStrLen + 1) = '*';
        ulStrLen += 2;
    }

    *(pszTargetUrl + ulStrLen) = '\0';
    *ppszUrl = pucTmpChr;

    return ulStrLen;
}




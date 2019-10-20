/*
HCSEC-3243-0024

zxb
*/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
typedef unsigned long ULONG;
typedef unsigned long UINT32;
typedef unsigned char UCHAR;
typedef unsigned short USHORT;

//InWhile_BufSizeIsArg_PtrCalcConst_CheckCondSetErr_OOB_case01
//While循环体内，BufSize为参数，常数指针运算，校验条件设置错误导致OOB Y
char* testcase04(char * pStr, UINT32 udwStrLen)
{
    char* pHead, *pTail;
    UINT32 guard;

    pHead = pStr;
    guard = 0;
    while((*pHead == ' ') && (guard < udwStrLen)) 
    {
        pHead++;
        guard++;
    }

    pTail = pHead;
    guard = 0;
    /*POTENTIAL FLAW:
        This routine contains an OOB read and write because of the way the string is iterated over. 
        The first loop ensures out-of-bound access does not occur by verifying that the iterated guard variable does not exceed the passed in string length. 
        However, this guard is reset to zero prior to its use in the the second loop.
        This function has the potential to access out-of-bounds memory in every circumstance where a string begins with white space, 
        completely undermining the purpose of a safe trim function.
    */
    while((*pTail != ' ') && (guard < udwStrLen)) 
    {
        pTail++;
        guard++;
    }

    *pTail = '\0';

    return pHead;
}


/*
 * Issue No: 3244-0090
 * Author: renjinsong/369861
 * Date: 2019/04/03
 */

//------------------------------
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define XX_DEBUG_TYPE_ROOT 15
#define XX_DEUBG_GENERAL 25

typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned long ULONG;

//InWhile_BufSizeIsArg_PtrCalcWithNonConst_InvalidCheck_OOB_case1
//While循环体内，缓冲区长度未知（缓冲区内容），非常数指针运算，校验不足导致OOB N

void TXX_SXX_FindXXBuf(UCHAR ucType, UCHAR *pucMsg)
{
    USHORT usMsgLen = 0;
    UCHAR ucAttrLength = 0;
    UCHAR ucAttrType = 0;
    ULONG ulCount = 0;

    if (NULL == pucMsg) {
        printf("Input is NULL.");
        return;
    }

    usMsgLen = *(USHORT *)&pucMsg[2];
    if (usMsgLen <= 20) {
        printf("Msg len error: %u.", usMsgLen);
        return;
    }

    usMsgLen -= 20;
    pucMsg += 20;

    while (usMsgLen) {
        ucAttrType = pucMsg[0];
        
        // Potential Flaw: usMsgLen could be 1 byte, which means that pucMsg[0] is valid, 
        // while pucMsg[1] would be an OOB read
        ucAttrLength = pucMsg[1];
        if(ucAttrLength < 2) {
            return;
        }
        
        if (ucAttrType == ucType) {
            return;
        }

        if (usMsgLen < ucAttrLength) {
            return;
        }

        usMsgLen -= ucAttrLength;
        pucMsg += ucAttrLength;

        ulCount ++;
        if (ulCount > 100) {
            ulCount = 0; 
        }
    }
}


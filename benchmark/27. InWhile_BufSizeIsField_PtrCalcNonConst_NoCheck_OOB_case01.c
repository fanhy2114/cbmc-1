/*
 * Issue No: 3243-0008
 * Author: renjinsong/369861
 * Date: 2019/04/02
 */

//------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MSG_HEAD_LENGTH 8
typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned int UINT;
typedef unsigned long ULONG;

typedef struct {
    UCHAR len;
    UCHAR ucNextHeaderType;
}YY_MSG_HEADER_S;

typedef struct {
    UCHAR ulLength;
    YY_MSG_HEADER_S sPartYyHeader;
}XX_MSG_HEADER;

//InWhile_BufSizeIsField_PtrCalcWithNonConst_InvalidCheck_OOB_case1
//While循环体内，缓冲区长度为结构体域，非常数指针运算，未校验OOB Y

void SmOnGtpExtHeader(XX_MSG_HEADER* pstXxMsgHdr, UCHAR *puSmCause)
{
    UCHAR *pucMsgEnd = NULL;
    UCHAR *pucTemp = NULL;
    UCHAR ucExtHeaderType;
    UCHAR uwLen = 0;

    pucMsgEnd = (UCHAR *)pstXxMsgHdr + pstXxMsgHdr->ulLength + MSG_HEAD_LENGTH;
    ucExtHeaderType = pstXxMsgHdr->sPartYyHeader.ucNextHeaderType;
    pucTemp = (UCHAR *)pstXxMsgHdr + sizeof(XX_MSG_HEADER);

    while (ucExtHeaderType) {
        uwLen = uwLen + (*pucTemp) * 4;
        pucTemp = pucTemp + (*pucTemp) * 4 - 1; 
        // Potential Flaw: pucTemp will be off the end of the buffer, leading to an out-of-bounds read
     
        ucExtHeaderType = *pucTemp;
        pucTemp++;
        // This check is done, but too late
        if ((pucTemp > pucMsgEnd) || ((0 != ucExtHeaderType) && (0 == *pucTemp))) {
            return;
        }
    }
}

	//SmOnGtpExtHeader((XX_MSG_HEADER*)buf, NULL);
	
    return 0;
}

/*
 * Issue No: 3131-0029
 * Author: yuchunhua/445873
 * Date: 2019/03/25
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char UINT8;
typedef int INT32;
typedef unsigned int  UINT32;

#define XXXX_STATIC_BYTES 100
#define XXXX_DYN_BYTES 40

#define XXXX_IPV4_STATIC  16
#define XXXX_IPV6_STATIC  40
#define XXXX_RPT_HEADER 2
#define XXXX_IPV4_HEADER 4
#define XXXX_IPV6_HEADER 6

typedef void VOID;
typedef struct{
    UINT8   ucStatic[XXXX_STATIC_BYTES];    // 100 bytes
    UINT8   ucDyn[XXXX_DYN_BYTES];          // 40 bytes
}XXXX_MyMsg1;

typedef struct{
	INT32 ucSubType;
}MY_MSG2;

typedef struct{
	INT32 ucSubHdrNum;
	MY_MSG2 stSubHeader[20];
}XXXX_MyMsg4;

typedef struct{
	INT32 ulOffset;
	INT32 ucSubType;
}XXXX_MY_MSG3;

typedef unsigned int XXXX_YYY_STATIC;

//InWhile_BufSizeIsConst_PtrCalcConst_CalcInterprocess_NoCheck_OOB_case01
//while循环内，BufSize为常数，过程间常数指针运算，未校验导致拷贝OOB  Y

VOID My_MemCpy(VOID *dest, VOID *src, UINT32 len)
{
	memcpy(dest, src, len);
}

VOID XXXX_MyFunc2(XXXX_MyMsg1 *pstDecompCrc,
                               XXXX_MY_MSG3 *pstOffset)
{
	UINT8 ucRtpCC = 10;
	XXXX_YYY_STATIC *pCrcStatic;
	UINT8 *pRtpHeader = "hello world";
    pCrcStatic = (XXXX_YYY_STATIC*)(pstDecompCrc->ucStatic + pstOffset->ulOffset);
	/*POTENTIAL FLAW:循环中对pstOffset->ulOffset的增加，可能导致 pCrcStatic的写溢出*/
    (VOID)My_MemCpy((VOID*)(pCrcStatic + 1), (VOID*)(pRtpHeader + 1), (UINT32)(ucRtpCC << 2));

}

UINT32 XXXX_MyProc2(XXXX_MyMsg4 *pstDecompCtxtUnit,XXXX_MyMsg1 *pstDecompCrc, XXXX_MY_MSG3 *pstOffset)
{
	XXXX_MyFunc2(pstDecompCrc,pstOffset);
	return 0;
}

VOID XXXX_DecompLenInfo(XXXX_MY_MSG3 *pstOffset)
{
	UINT32 ulOffset = 0;
	UINT32 ucSubType = pstOffset->ucSubType;
    switch(ucSubType)
    {
        case XXXX_IPV4_HEADER:
            ulOffset = sizeof(XXXX_IPV4_STATIC);    // =16 bytes
        case XXXX_IPV6_HEADER:
            ulOffset = sizeof(XXXX_IPV6_STATIC);    // =40 bytes
    }

	pstOffset->ulOffset += ulOffset;

}

//当数据为IP4/IP4/IP6/IP6/RTP时
UINT32 XXXX_DecompMy2(XXXX_MyMsg4 *pstDecompCtxtUnit,
                            XXXX_MyMsg1 *pstDecompCrc)
{

	XXXX_MY_MSG3 stOffset = {0};
	UINT32 ulRet = 0;
    for (UINT32 ulLoop = 0; ulLoop < (UINT32)(pstDecompCtxtUnit->ucSubHdrNum); ulLoop++)
    {
		switch (pstDecompCtxtUnit->stSubHeader[ulLoop].ucSubType)
        {
            case XXXX_RPT_HEADER://此时stoffset->uloffset已累加112个字节。则内部的拷贝越界。
                ulRet = XXXX_MyProc2(pstDecompCtxtUnit, pstDecompCrc, &stOffset);
                break;
        }
        //当处理IP4/IP4/IP6/IP6类型的4个包后，stOffset->uloffset已累加112个字节。
        XXXX_DecompLenInfo(&stOffset);
    }
	return 0;
}

UINT32 XXXX_My(XXXX_MyMsg4 *pstDecompCtxtUint)
{
    XXXX_MyMsg1       stDecompCrc = {{0},{0}};  // THIS IS 140 BYTES LONG

    int ulRet = XXXX_DecompMy2(pstDecompCtxtUint, &stDecompCrc);
	return ulRet;
}









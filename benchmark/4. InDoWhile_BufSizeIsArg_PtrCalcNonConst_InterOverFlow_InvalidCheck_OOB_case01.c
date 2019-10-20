/*
*author:ywx445873 yuchunhua
*CSEC����:3244-0030, 3244-0031
*/

#include <stdlib.h>
#include "securec.h"
typedef unsigned short USHORT;
typedef short SHORT;
typedef void VOID;
typedef  unsigned char UCHAR;
typedef unsigned int UINT32;

typedef struct
{
	USHORT uType;
	USHORT uLen;
}T_HEAD;

#define TOTAL_LEN(usLen) (sizeof(T_HEAD) + (usLen))

//InDoWhile_BufSizeIsArg_PtrCalcNonConst_InterOverFlow_InvalidCheck_OOB_case01
//DoWhile循环内，BufSize为参数，非常数指针运算，偏移量运算整数溢出，校验不足,导致OOB N

UINT32 TestCase(T_HEAD *pTHeader, SHORT sTotalLen, USHORT uType, VOID *pVal)
{
	T_HEAD *pHeader = NULL;
	VOID *pData = NULL;

	pHeader = pTHeader;
	do
	{
		if (uType == pHeader->uType) // OUT-OF-BOUNDS READ
		{
		}

		/* POTENTIAL FLAW: POTENTIAL FLAW: If pHeader->uLen is 0xfffc, the macro will return 0,
	  causing the variables sTotalLen and pHeader to remain unchanged. This will result in an infinite loop.*/

		sTotalLen -= (SHORT)TOTAL_LEN(pHeader->uLen); // INTEGER UNDERFLOW
		pHeader = (T_HEAD *)((UCHAR *)pHeader + TOTAL_LEN(pHeader->uLen));
	} while (0 <= sTotalLen); // INFINITE LOOP

	return 0;
}


/*
3244-0031
*/

#include <stdlib.h>

//#define NULL 0
typedef unsigned short USHORT;
typedef void VOID;
typedef unsigned long ULONG;
typedef unsigned char UCHAR;

typedef struct 
{
	USHORT usType;
	USHORT usLen;
	VOID *pValue;
}MSG_UNIT_S;

typedef struct {
	UCHAR *pData;
}MSG_HDR;
//InWhile_BufSizeIsField_PtrCalcWithNonConst_InvalidCheck_OOB_case1
//For循环体内，缓冲区长度为域，非常数指针运算，校验不足导致结构体访问OOB  Y

ULONG TestCase(MSG_HDR *pstHead, USHORT usMsgUnitIndex, USHORT *pusType, USHORT *pusLen, VOID **ppData)
{
	UCHAR *pucData = NULL;
	UCHAR *pCurrent = NULL;
	USHORT usUnitLen = 0;
	USHORT usIndex = 0;
	MSG_UNIT_S *pstMsgUnit = NULL;

	pstMsgUnit = (MSG_UNIT_S *)(pstHead + 1);

	for (usIndex = 1; usIndex < usMsgUnitIndex; usIndex++)
	{
		pCurrent = (UCHAR *)pstMsgUnit;
		usUnitLen = pstMsgUnit->usLen; // OUT-OF-BOUNDS READ
		/* POTENTIAL FLAW: pstMsgUnit->usLen Ϊ�ⲿ����ȴû��У�飬������ܵ���ָ��pCurrentƫ�����*/
		pCurrent += (sizeof(USHORT) + sizeof(USHORT) + usUnitLen);
		pstMsgUnit = (MSG_UNIT_S *)pCurrent;
	}

	*pusType = pstMsgUnit->usType; // OUT-OF-BOUNDS READ
	*pusLen = pstMsgUnit->usLen; // OUT-OF-BOUNDS READ
	pucData = (UCHAR *)pstMsgUnit;
	*ppData = pucData + sizeof(USHORT) + sizeof(USHORT); // ILLEGAL POINTER RETURNED

	return 0;
}


/*
*3244-0041\3244-0040\3244-0021\3243-0042\3244-0019
*/


#include <stdlib.h>
#include <stdio.h>

typedef unsigned short USHORT;
typedef short SHORT;
typedef void VOID;
typedef  unsigned char UCHAR;
typedef unsigned int UINT32;
typedef unsigned long  ULONG;

#define HEADER_LEN 5
#define SEQ_NO_LEN 30
#define EXTENSION_TYPE_LEN 20
#define HEAD_ALIGN 20

typedef struct {
	UCHAR ucNextExtHeadType;
	int ucSequenceNumberFlag;
	int ucExtHeadFlag;
}HEAD_S;

//InWhile_BufSizeIsArg_PtrCalcNonConst_NoCheck_OOB_case01
//While循环内，BufSize为参数，非常数指针运算，未校验导致OOB Y

ULONG TestCase(UCHAR* pucMsg, ULONG ulMsgLength, ULONG *pulLen)

{
	HEAD_S *pstV1Head = NULL;
	UCHAR ucExtType = 0;
	UCHAR ucExtLen = 0;

	if (NULL == pucMsg)
	{
		return -1;
	}

	pstV1Head = (HEAD_S*)pucMsg;
	*pulLen = HEADER_LEN;

	if (pstV1Head->ucSequenceNumberFlag)
	{
		(*pulLen) += (SEQ_NO_LEN + HEAD_ALIGN);
	}

	if (pstV1Head->ucExtHeadFlag)
	{
		ucExtType = pstV1Head->ucNextExtHeadType;

		while (ucExtType != 0)
		{
			ucExtLen = (*(UCHAR*)(pucMsg + (*pulLen)));

			if (0 == ucExtLen)
			{
				return 0;
			}

			(*pulLen) += (ucExtLen * 4 - 1);
			// VULN: There is no check here that pucMsg + (*pulLen) are within the bounds 
			//       of the outer message.
			/* POTENTIAL FLAW: *pulLen ���ⲿ���ݼ�����������ܵ���ָ��ƫ����� */
			ucExtType = *((UCHAR*)(pucMsg + (*pulLen)));

			(*pulLen) += EXTENSION_TYPE_LEN;

			if ((*pulLen) > ulMsgLength)
			{
				return 0;
			}

		}
	}

	return 1;
}


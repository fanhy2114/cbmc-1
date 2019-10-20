/*
 * Issue No: 3244-0036、3244-0029
 * Author: wangzhiwen/564328
 * Date: 2019/04/01
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define  ULONG  unsigned long
#define  USHORT unsigned int
#define  UCHAR  unsigned char
#define  VOID   void
#define  XXX_V1_HEAD_LEN   4
#define  XXX_VIP_ID_ENABLE 1
#define  XXX_EXTEND_MIN    0
#define  XXX_EXTEND_MAX    10
#define  XXX_TYPE_LEN      4

extern VOID XXX_MemCpy_s(void *dest,USHORT copyLen1,void *src,USHORT copyLen2);
extern  ULONG XXX_NTOHS(ULONG ulParamData);

//InWhile_BufSizeIsUnknow_PtrCalcNonConst_NoCheck_OOB_case01
//While循环内，BufSize未知，非常数指针运算，未校验导致OOB 

typedef struct
{
	UCHAR ucSpare1;
	UCHAR ucExtHeadFlag;
}XXX_V1_HEAD_S;

//XXX_V1_HEAD_S* pstV1MsgHead;

VOID TestCaseBad_10(UCHAR* pucStdMsg)
{
	XXX_V1_HEAD_S* pstV1Head = NULL;
	UCHAR ucExtType = 0;
	UCHAR ucExtLen = 0;
	USHORT usLen = XXX_V1_HEAD_LEN + 4*sizeof(UCHAR);
	UCHAR* pucExtHead = NULL;
	USHORT usNextExtContent;
	UCHAR  ucNextExtHeadType = 0;

	pstV1Head = (XXX_V1_HEAD_S*)pucStdMsg;

	/*if(XXX_VIP_ID_ENABLE == pstV1MsgHead->ucSpare1)
	{
		return;
	}*/
	pucExtHead = pucStdMsg + sizeof(XXX_V1_HEAD_S);

	if(1 == pstV1Head->ucExtHeadFlag)
	{
		ucExtType = pstV1Head->ucExtHeadFlag;
		while(0 != ucExtType)
		{
			(VOID)XXX_MemCpy_s(&usNextExtContent,sizeof(USHORT),(pucExtHead+sizeof(UCHAR)),sizeof(USHORT));
			usNextExtContent = XXX_NTOHS(usNextExtContent);

			if((XXX_VIP_ID_ENABLE == ucExtType) && (XXX_EXTEND_MIN < usNextExtContent) && (XXX_EXTEND_MAX >= usNextExtContent))
			{
				return;
			}

			ucExtLen = *((UCHAR*)(pucStdMsg + usLen));
			if(0 == ucExtLen)
			{
				return;
			}
			//整数溢出
			usLen += (ucExtLen*4 - 1);
			//越界访问
			ucExtType = *((UCHAR*)(pucStdMsg + usLen));
			usLen += XXX_TYPE_LEN;

			pucExtHead = pucStdMsg + usLen;
		}
	}
	return;
}



/*3244-0115  3244-0117*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
typedef unsigned char   UCHAR;
typedef unsigned short  USHORT;
typedef unsigned int    ULONG;

typedef struct {
	ULONG uulGroup;
	ULONG ulSSS;
}MY_SSS;

//InWhile_BufSizeIsArg_PtrCalcConst_InvalidCheck_OOB_case01
//While循环内，BufSize为参数，常数指针运算，校验不足导致OOB Y
ULONG testCase(UCHAR *pucMsg, ULONG ulMsgLen, MY_SSS* pstQcn)
{
	ULONG ulRG = 0;
	ULONG ulSSS = 0;
	ULONG ulRet = 0;
	ULONG ulNameLen = 0;
	USHORT usCurNameLen = 0;
	UCHAR ucFilterNum = 0;
	UCHAR* pucNameMsg = NULL;

	while (ulMsgLen > 0)
	{
		/*POTENTIAL FLAW: 如果ulMsgLen长度小于4字节，由处存在越界读的问题*/
		ulRG = *(ULONG*)pucMsg;

		/*POTENTIAL FLAW: 如果ulMsgLen长度小于8字节，由处存在越界读的问题*/
		ulSSS = *(ULONG*)(pucMsg + sizeof(ULONG));

		/*POTENTIAL FLAW: 如果ulMsgLen长度小于10字节，由处存在越界读的问题*/
		usCurNameLen = *(USHORT*)(pucMsg + 2 * sizeof(ULONG));

		/*POTENTIAL FLAW: 如果ulMsgLen长度小于11字节，由处存在越界读的问题*/
		ucFilterNum = *(UCHAR*)(pucMsg + 2 * sizeof(ULONG) + sizeof(USHORT));

		if ((ulRG == pstQcn->uulGroup) && (ulSSS == pstQcn->ulSSS))
		{

			pucNameMsg = pucMsg + 2 * sizeof(ULONG) + sizeof(USHORT) + sizeof(UCHAR);

			/*POTENTIAL FLAW: 来自外部的数据usCurNameLen经过运算，可能出现整数反转*/
			ulNameLen = usCurNameLen - 2 * sizeof(ULONG) + sizeof(USHORT) + sizeof(UCHAR);

			/*POTENTIAL FLAW: 经过来自外部的数据usCurNameLen运算的变量ulNameLen，未经检验，可能超出缓冲区大小*/
			ulRet = pucNameMsg[ulNameLen];

			return ulRet;
		}
		else
		{
			/*POTENTIAL FLAW: 来自外部的数据usCurNameLen如果为0，会出现无限循环问题*/
			ulMsgLen -= usCurNameLen;
			pucMsg += usCurNameLen;
		}
	}
	return 0;
}


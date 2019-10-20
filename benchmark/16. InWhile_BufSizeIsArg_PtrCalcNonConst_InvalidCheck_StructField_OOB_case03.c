/*
*author:ywx445873 yuchunhua
*CSEC����:3243-0038
*/

#include <stdlib.h>

typedef unsigned char VOS_UINT8;
typedef unsigned short VOS_UINT16;

//InWhile_BufSizeIsArg_PtrCalcNonConst_InvalidCheck_StructField_OOB_case03
//While循环内，BufSize为参数，非常数指针运算，校验不足，结构体域访问OOB Y

// #define HEADER_LEN  100这个数字过大，smack展开这么多次会超时，改成10就能够证到。要加上--unroll 20参数。

typedef struct {
	VOS_UINT16 ucIeLen;
}S_HEAD;

#define HEADER_LEN  10

VOS_UINT8  TestCase(VOS_UINT8   *pucIesBegin,
	VOS_UINT16   uwIesLen,
	VOS_UINT8    ucIeName,
	VOS_UINT8  **ppIe)
{
	VOS_UINT16 uwIeLength = 0;
	VOS_UINT8 *pucTmp = 0;

	uwIeLength = uwIesLen;

	pucTmp = pucIesBegin;

	VOS_UINT8 ret = 0;
	while (uwIeLength > HEADER_LEN)
	{
		/* POTENTIAL FLAW:���������ⲿ�����ܵ����������*/
		uwIeLength -= (((S_HEAD *)pucTmp)->ucIeLen + HEADER_LEN);
		if ((*pucTmp) == ucIeName)
		{
			*ppIe = pucTmp;
			return 1;
		}
		else
		{
			/* POTENTIAL FLAW: pucTmpָ��ƫ�������ⲿ*/
			//pucTmp += (((S_HEAD *)pucTmp)->ucIeLen + HEADER_LEN);
			pucTmp++;
            /// Here may overflow	
			ret += *pucTmp;
		}
	}
	ret += *pucTmp;

	return ret;
}


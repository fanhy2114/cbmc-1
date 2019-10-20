/*
3219-0012
*/
#include <stdlib.h>
typedef unsigned int VOS_UINT32;
typedef unsigned char VOS_UINT8;
typedef unsigned short VOS_UINT16;
typedef char VOS_CHAR;

#define VOS_OK 0

#define COMM_ELEMENT_HEADER_LEN  100

//InWhile_BufSizeIsArg_PtrCalcNonConst_InvalidCheck_OOB_case04
//While循环内，BufSize为参数，非常数指针运算，校验不足导致OOB Y

// 代码本身是证明不出问题的，因为指针赋值以后没有取它的值，编译器实际上优化掉了。需要添加取值的代码。还有循环，要加上--unroll 20参数。

typedef struct {
	VOS_UINT16 enIEName;
	VOS_UINT16 uwIELength;
}COMM_IE_STRU;

VOS_UINT32 TestCase(COMM_IE_STRU *pCurrIeLoc, VOS_UINT8 *pEnd, VOS_UINT16 enIEName, COMM_IE_STRU **pIE)
{
	VOS_UINT32 ret = 0;
	VOS_UINT8 ulIeLen = 0;
	while ((VOS_CHAR*)pCurrIeLoc < (VOS_CHAR*)pEnd)
	{
		*pIE = pCurrIeLoc;
		if ((*pIE)->enIEName == enIEName)
		{
			return VOS_OK;
		}
		ulIeLen = (*pIE)->uwIELength;
		/*POTENTIAL FLAW:ulIeLen �����ⲿ���������Ȳ��ɿأ����ܵ��»������� */
		pCurrIeLoc = (COMM_IE_STRU*)((VOS_UINT8*)pCurrIeLoc + ulIeLen + COMM_ELEMENT_HEADER_LEN);
		ret += pCurrIeLoc->enIEName;
	}
	return ret;
}



/*
*author:ywx445873 yuchunhua
*CSEC����:3243-0009, 3243-0010,3243-0007
*/

#include <stdlib.h>

typedef unsigned int VOS_UINT32;
typedef unsigned char VOS_UINT8;
typedef unsigned short VOS_UINT16;
typedef struct {
	VOS_UINT8 ExtHeadType;
	VOS_UINT32 ucExtLen;
}S_PFP_GTP_PART_EXT_HEAD;

//InWhile_BufSizeIsArg_PtrCalcWithNonConst_InvalidCheck_OOB_case01
//While循环体内，BufSize为参数，非常数指针运算，完全未校验OOB导致  Y
VOS_UINT32 TestCase(S_PFP_GTP_PART_EXT_HEAD* pHead, VOS_UINT8 ucNextExtHType, VOS_UINT8 bKind)
{
	VOS_UINT32 uwGtpExtLen = 0;
	VOS_UINT8 *pExtType = NULL;

	while (ucNextExtHType != 0)
	{
		switch (bKind)
		{
			case 2:
				uwGtpExtLen = (VOS_UINT16)(pHead->ucExtLen * 10);
				break;
			default:
				uwGtpExtLen = (VOS_UINT16)(pHead->ucExtLen * 10);
				break;
		}
		/*POTENTIAL FLAW:���ucNextExtHType��Ϊ0��������ѭ������uwGtpExtLen�ĳ���ûУ�飬�ᵼ��ָ��pHeadƫ�����*/
		pHead = (S_PFP_GTP_PART_EXT_HEAD*)((VOS_UINT8)pHead + uwGtpExtLen);
		pExtType = &(pHead->ExtHeadType);
		ucNextExtHType = *(VOS_UINT8*)pExtType;
	}
	return 0;
}


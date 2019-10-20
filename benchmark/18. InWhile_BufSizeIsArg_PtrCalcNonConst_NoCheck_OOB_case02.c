/*
 * Issue No: 3272-0079、3272-0088
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

typedef struct
{
	USHORT usExheaderLength;
}XXX_MSG_S;

typedef struct
{
	UCHAR bExheaderGiven;
	UCHAR ucExheaderGivenType;
}XXX_CONFIG_S;

//InWhile_BufSizeIsArg_PtrCalcNonConst_NoCheck_OOB_case01
//While循环内，BufSize为参数，非常数指针运算，未校验导致OOB Y

VOID TestCaseBad_06(char* pucBuf,ULONG ulBufLen,XXX_MSG_S* pstMsgInfo,XXX_CONFIG_S* pstConfigInfo)
{
	char* pcTmp = pucBuf;
	UCHAR ucNextExheaderFlg = 0;
	ULONG ulExType[4] = {256,257,258,259};
	UCHAR i;
	UCHAR ucGivenFlg = 0;
	
	if(NULL == pucBuf || 0 == ulBufLen)
	{
		return;
	}
	
	pstMsgInfo->usExheaderLength = 0;
	pcTmp += 11;
	ucNextExheaderFlg = (UCHAR)pcTmp[0];
	pcTmp += 1;
	for(i = 0;i < 4;i++)
	{
		if(0 != ucNextExheaderFlg)
		{
			UCHAR ucLength;
			ulExType[i] = ucNextExheaderFlg;
			if(pstConfigInfo->bExheaderGiven && 1 != ucGivenFlg)
			{
				if(ulExType[i] == pstConfigInfo->ucExheaderGivenType)
				{
					ucGivenFlg = 1;
				}
			}
			// POTENTIAL FLAW:out-of-bounds reads
			ucLength = (UCHAR)pcTmp[0];
			// POTENTIAL FLAW:INTEGER OVERFLOW
			pcTmp += ucLength*4 - 1;
			ucNextExheaderFlg = (UCHAR)pcTmp[0];
			pcTmp += 1;
			pstMsgInfo->usExheaderLength += ucLength*4;
		}
	}
}
	
 
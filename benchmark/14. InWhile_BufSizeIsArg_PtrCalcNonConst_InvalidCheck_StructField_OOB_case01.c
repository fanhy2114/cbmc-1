/*
3244-0113  3244-0110  3244-0111 3244-0109
3244-0112  3244-0114
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
typedef unsigned long ULONG;
typedef unsigned char UCHAR;
typedef unsigned short USHORT;



typedef struct
{
  ULONG ulValue1;
  UCHAR ucValue2;
  UCHAR ucValue3;
  USHORT usValue4;
}MY_MSG;

//InWhile_BufSizeIsArg_PtrCalcNonConst_InvalidCheck_StructField_OOB_case01
//While循环内，BufSize为参数，非常数指针运算，校验不足，结构体域访问OOB Y
ULONG testcase02(UCHAR *pucBkpMsg, ULONG ulMsgLen)
{
  ULONG ulRet = 0;
  ULONG ulLen = 0;

  UCHAR *pucMsg = pucBkpMsg;

  MY_MSG *pMyMsg = NULL;

  while (ulLen < ulMsgLen)
  {

    pMyMsg = (MY_MSG *)pucMsg;
 
    /*POTENTIAL FLAW: 当ulLen少于ulMsgLen 1个字节时，这里会产生OOB*/
    switch (pMyMsg->ulValue1) // OUT-OF-BOUNDS READ
    {
      case 0x55:

        ulRet = 0;
        break;

      default:

        return -1;
    }

    if (0 != ulRet)
    {
      return -1;
    }

    ulLen = ulLen + sizeof(MY_MSG) + pMyMsg->usValue4;
    pucMsg = pucMsg + sizeof(MY_MSG) + pMyMsg->usValue4;
  }
  return 0;
} 


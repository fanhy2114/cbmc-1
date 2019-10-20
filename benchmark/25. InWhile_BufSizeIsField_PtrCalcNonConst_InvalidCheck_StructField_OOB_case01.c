/*3244-0108  3244-0118*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

typedef unsigned char   UCHAR;
typedef unsigned short  USHORT;
typedef unsigned int    ULONG;

//InWhile_BufSizeIsField_PtrCalcNonConst_InvalidCheck_StructField_OOB_case01
//While循环内，BufSize为结构体域，非常数指针运算，校验不足, 结构体域访问OOB Y

typedef struct 
{
  ULONG ulIndex;
  USHORT usNum;
  USHORT usTotalLen;
}MY_HEAD_S;

typedef struct 
{
  USHORT usTag;
  USHORT usLength;
  UCHAR* aucBody;
}MY_TAG_S;

ULONG testCase(UCHAR *pucMsg, ULONG ulTag)
{
  ULONG ulTotalLen = 0;
  
  MY_HEAD_S* pstHead = NULL;
  MY_TAG_S* pstTagInfo = NULL;
  
  pstHead = (MY_HEAD_S*)pucMsg;
  
  pstTagInfo = (MY_TAG_S*)(pstHead + 1);
  ulTotalLen = pstHead->usTotalLen - sizeof(MY_HEAD_S);

  /* POTENTIAL FLAW: 
    it is possible for ulTotalLen to be 0 at the end of the loop, 
    in which case pstTagInfo points to the first byte beyond the end of the message. 
    Reading the value of the usLength field of the MY_TAG_S structure, 
    in order to perform the comparison, will thus result in a four byte out-of-bounds read 
    - even though the condition correctly returns 0. 
 */
  while ((ulTotalLen >= sizeof(MY_TAG_S) + pstTagInfo->usLength)) // OUT-OF-BOUNDS READ
  {
    if (pstTagInfo->usTag == (USHORT)ulTag)
    {
      return 0;
    }

    ulTotalLen -= sizeof(MY_TAG_S) + pstTagInfo->usLength;
    pstTagInfo = (MY_TAG_S*)((UCHAR *)pstTagInfo->aucBody + pstTagInfo->usLength);
  }
  return 0;
}


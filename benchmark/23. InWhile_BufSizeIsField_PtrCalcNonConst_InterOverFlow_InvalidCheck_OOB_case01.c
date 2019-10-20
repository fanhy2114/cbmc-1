/*3244-0119*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

typedef unsigned char   UCHAR;
typedef unsigned short  USHORT;
typedef unsigned int    ULONG;

typedef struct 
{
  ULONG ulMsgBodyLen;
  ULONG ulCount;
}MY_MSG_HEAD_S;

typedef struct 
{
  ULONG ulMsgLen;
  UCHAR temp[6];
}MY_MSG_NODE_S;

//InWhile_BufSizeIsField_PtrCalcNonConst_InterOverFlow_InvalidCheck_OOB_case01
//While循环体内，BufSize为结构体域，非常数指针运算，偏移量运算整数溢出，校验不足导致OOB N
void testCase(void* pMsg)
{
  ULONG ulBufLen = 0;
  ULONG ulMsgCount = 0;
  ULONG ulDealLen = 0;

  MY_MSG_HEAD_S *pstHeader = NULL;
  MY_MSG_NODE_S *pstCurMsg = NULL;

  pstHeader = (MY_MSG_HEAD_S*)pMsg;
 
  ulBufLen = pstHeader->ulMsgBodyLen;
  ulMsgCount = pstHeader->ulCount;

  pstCurMsg = (MY_MSG_NODE_S *)((UCHAR*)pMsg + sizeof(MY_MSG_HEAD_S));

  while (ulMsgCount > 0)
  {
    /* POTENTIAL FLAW: 
        Suppose that, on some iteration of the loop, ulDealLen has the value 0x100. 
        The size of the structure is 0x10 bytes. 
        If the value in the ulMsgLen field of the structure is 0xfffffef0, 
        then an integer overflow will occur, leaving ulDealLen unchanged. 
        The pointer pstCurProcMsg, however, will be moved backwards by 0x100 bytes. 
        This will result in the check passing, and an out-of-bounds read on the next iteration. 
    */
    ulDealLen += pstCurMsg->ulMsgLen + sizeof(MY_MSG_NODE_S);
    

    if (ulDealLen > ulBufLen)
    {

      return;
    }

    // OUT-OF-BOUNDS POINTER
    pstCurMsg = (MY_MSG_NODE_S *)((UCHAR*)pstCurMsg + pstCurMsg->ulMsgLen + sizeof(MY_MSG_NODE_S));
    ulMsgCount--;
  }
}





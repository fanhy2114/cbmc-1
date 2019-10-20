
//3244-0048
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#define XXXX_PF_Xxx_HEAD_LEN 10
#define E_DPS_XXX_BUTT 1

//InWhile_BufSizeIsField_PtrCalcNonConst_InvalidCheck_StructField_OOB_case01
//While循环内，BufSize为结构体域，非常数指针运算，校验不足,结构体域访问OOB Y

typedef struct{
    int usHLength;
    int usHType;
}DPS_XXX_STRU;

typedef struct{
    int usHLength;
    int usHType;
}DPS_Xxx_HDR_STRU;

void AM_Xxx_Msg(char* pucInMsg, char** ppucOutMsgXxxBody, short usXxxType)
{
    DPS_XXX_STRU* pstCurHeadPtr = NULL;
    char* pucCurPtr = NULL;
    short usXxxLen = 0;
    short usCurXxxType = E_DPS_XXX_BUTT;

    pucCurPtr = pucInMsg;
    pstCurHeadPtr = (DPS_XXX_STRU*)pucCurPtr;
    usCurXxxType = pstCurHeadPtr->usHType;
    usXxxLen = pstCurHeadPtr->usHLength;

    
    // ...
    while ((usCurXxxType < E_DPS_XXX_BUTT) && (usCurXxxType != usXxxType))
    {
        if (usXxxLen < XXXX_PF_Xxx_HEAD_LEN)
        {
            // ...
            return;
        }
        pstCurHeadPtr = (DPS_Xxx_HDR_STRU*)((char*)pstCurHeadPtr + usXxxLen);
        
        // Potential Flaw: Doesn't check that usXxxLength is with the bounds of the outer packet, 
        //      therefore it could put the next packet up to 64K ish past the end.
        usXxxLen = pstCurHeadPtr->usHLength;
        usCurXxxType = pstCurHeadPtr->usHType;
    }

    // ...
}


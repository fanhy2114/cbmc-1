/*
 * Issue No: 3272-0018
 * Author: renjinsong/369861
 * Date: 2019/04/03
 */

#include <stdlib.h>

//------------------------------
typedef char CHAR;
typedef unsigned long ULONG;

//InWhile_BufSizeIsArg_PtrCalcWithConst_InvalidCheck_StrProc_OOB_case01
//While循环内,字符串处理，BufSize未知，校验不充分，字符串溢出OOB N

ULONG ParseString(const CHAR* pValue)
{
	const CHAR* ptr;
	ULONG ulLen = 0;

	if ('\"' != *pValue) {
		return 0;
	}

	ptr = pValue + 1;
	// ptr is a external data
	while ((*ptr != '\"') && *ptr) {
		ulLen++;
		if (*ptr++ == '\\') {
			// POTENTIAL FLAW: This will skip past null-terminator if string end with '\', an OOB read occurs
			ptr++;
		}
	}
	return ulLen;
}


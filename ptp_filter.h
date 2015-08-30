//raspberry pi
#ifndef PTP_FILTER_H_INCLUDED
#define PTP_FILTER_H_INCLUDED

#include "data_type.h"

/*
*皆さんのコードを書いてください
*/

//PTP処理関数
struct ArmPointer ptpFilter(void);
//フィルタリング処理済みのアームポインタの値を他ファイルのプログラムに渡す出力関数
struct ArmPointer get_ArmpointerValue_filtered(void);

#endif

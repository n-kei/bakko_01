//raspberry pi
#ifndef CONTROLER_COMMAND_INTERPRETER_H_INCLUDED
#define CONTROLER_COMMAND_INTERPRETER_H_INCLUDED

#include "data_type.h"
/*
*皆さんのコードを書いてください
*/

//動作コマンドを取得してアームポインタを求める関数
struct ArmPointer calculate_armPointer(void);
//動作コマンドより求めたRCサーボの値を他ファイルのプログラムに渡す出力関数
struct ServoValue get_RCservoValue(void);
//求めたアームポインタの値を他ファイルのプログラムに渡す出力関数
struct ArmPointer get_ArmPointer(void);

#endif

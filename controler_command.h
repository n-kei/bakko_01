//raspberry pi
#ifndef CONTROLER_COMMAND_H_INCLUDED
#define CONTROLER_COMMAND_H_INCLUDED

#include "data_type.h"
/*
*皆さんのコードを書いてください
*/

//ボタンコマンドデータを動作コマンドに変換する関数
struct MotionCommand Button2Motion(struct ButtonCommand button_command);
//求めた動作コマンドデータを他ファイルのプログラムに渡す出力関数
struct MotionCommand get_motionCommand(void);

#endif

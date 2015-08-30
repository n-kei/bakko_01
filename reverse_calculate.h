//raspberry pi
#ifndef REVERSE_CALCULATE_H_INCLUDED
#define REVERSE_CALCULATE_H_INCLUDED

#include "data_type.h"

/*
*皆さんのコードを書いてください
*/

//それぞれのパワーサーボの出力値を逆演算で求めて、求めた値を配列に格納し、その配列の先頭アドレスを返す関数
struct ServoValue *reverse_calculate(void);
//サーボの角度（弧度法）をサーボ指令値に変換する関数
struct ServoValue rad2command(void);
//求めたパワーサーボの指令値を他ファイルのプログラムに渡す出力関数
struct ServoValue *get_PowerServoValue(void);

#endif

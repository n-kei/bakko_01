//Arduino
#ifndef TRANCEIVER_COMMAND_H_INCLUDED
#define TRANCEIVER_COMMAND_H_INCLUDED

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "data_type.h"

/*
*皆さんのコードを書いてください
*/

//サーボの状態を引数で取り込んでサーボを制御する関数
void servo_control(ServoValue servo_value);

#endif

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

//各サーボの指令値をraspberry pi から受信する関数
struct ServoValue receiver_command(void);
//各サーボの観測値をraspberry pi に送信する関数
void trans_command(struct ServoValue servo_value);

#endif

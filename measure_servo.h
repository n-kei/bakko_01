//Arduino
#ifndef MEADURE_SERVO_H_INCLUDED
#define MEASUEW_SERVO_H_INCLUDED

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "data_type.h"

/*
*皆さんのコードを書いてください
*/

//サーボの角度データを計測する関数
struct ServoValue measure_servo(void);

#endif

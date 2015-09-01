#ifndef DATA_TRNACEIVER_H_INCLUDED
#define DATA_TRANCEIVER_H_INCLUDED

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#define BUFF_SIZE 128

void transfer_MeasureValue(int transfer_data);
int receive_CommandValue();
int tranceive_ServoValue(int transfer_data);
#endif

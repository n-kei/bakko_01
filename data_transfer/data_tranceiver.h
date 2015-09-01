//raspberry pi
#ifndef REVERSE_CALCULATE_H_INCLUDED
#define REVERSE_CALCULATE_H_INCLUDED

#include <termios.h>
#include "data_type.h"

#define BUFF_SIZE 4096
#define USB_PORT_NUM 4
#define USB_DF_NAME_A "/dev/ttyUSB0"
#define USB_DF_NAME_B "/dev/ttyUSB1"
#define USB_DF_NAME_C "/dev/ttyUSB2"
#define USB_DF_NAME_D "/dev/ttyUSB3"

//raspberry piからarduinoにデータを転送する関数
void serial_init(int fd, speed_t baud_rate);
//
void USBs_init(speed_t baud_rate);
int receive_MeasureValue(void);
void transfer_CommandValue(int target_servo, int transfer_data);

#endif

# -*- coding: utf-8 -*-
import serial
import time

ser = serial.Serial('/dev/ttyUSB0', 9600);
time.sleep(2)
ser.write(b'A')
time.sleep(2)
ser.write(b'B')
ser.close()

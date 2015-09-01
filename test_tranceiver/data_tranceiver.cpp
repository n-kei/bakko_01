#include "data_tranceiver.h"

void transfer_MeasureValue(int transfer_data)
{
  char buffer[BUFF_SIZE];

  sprintf(buffer, "%d", transfer_data);
  Serial.write(buffer, strlen(buffer));
  //Serial.println(buffer);
}

int receive_CommandValue()
{
  int receive_data_len, receive_data;
  int i;
  char buffer[128] = {0};

  receive_data_len = Serial.available();
  if (receive_data_len) {
    for (i = 0; i < receive_data_len; i++)
      buffer[i] = Serial.read();

      receive_data = atoi(buffer);
      return(receive_data);
  } else {
    return (-1);
  }
}

int tranceive_ServoValue(int transfer_data)
{
  int receive_data;

  receive_data = receive_CommandValue();

  if(receive_data == -1) {
    return(-1);
  } else {
    //transfer_MeasureValue(transfer_data);
    transfer_MeasureValue(transfer_data);
    return(receive_data);
  }
  
}


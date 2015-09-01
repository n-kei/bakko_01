#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <termios.h>
#include <time.h>
#include <errno.h>
#include "data_type.h"

#define DEV_NAME "/dev/ttyUSB0"
#define BAUD_RATE B9600
#define BUFF_SIZE 4096

void serial_init(int fd) 
{
  struct termios tio;

  memset(&tio, 0, sizeof(tio));
  tio.c_cflag = CS8 | CLOCAL | CREAD;
  tio.c_cc[VTIME] = 100;

  cfsetispeed(&tio, BAUD_RATE);
  cfsetospeed(&tio, BAUD_RATE);

  tcsetattr(fd, TCSANOW, &tio);
}

int main(int argc, char **argv) 
{
  int fd;
  int i, j;
  int len, receive_data;
  unsigned char buffer[BUFF_SIZE], in_data[BUFF_SIZE];
  union ServoData tmp;

  printf("start serial port read example..\n");
  fd = open(DEV_NAME, O_RDWR | O_NONBLOCK);
  //fd = open(DEV_NAME, O_RDWR);
 
  if(fd < 0) {
    perror(argv[0]);
    exit(1);
  }

  printf("init serial port\n");
  serial_init(fd);
  
  printf("start main loop...\n");
  j = 0;
  
  while(1) {
    len = read(fd, buffer, BUFF_SIZE);
    if(len <= 0) {
      continue;
    }

    /*  
    if(len < 0) {
      printf("%d\n", errno); 
      perror(argv[0]);
      exit(2);
    }
*/    
    receive_data = atoi(buffer);
    printf("recieve_data = %s\n", buffer);
  }
  return(0);
}
      

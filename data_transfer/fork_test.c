#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) 
{
  int p_id;
  int status;
  int return_code = 0;

  if((p_id = fork()) == 0) {
    printf("start process A\n");
    sleep(2);

    printf("end process A\n");
  }

  else {
    if(p_id != -1) {
      wait(&status);
      printf("end root process\n");
    }
    else {
      perror("root process");
      return_code = 1;
    }
  }

  return(return_code);
}

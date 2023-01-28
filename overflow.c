#include <stdio.h>

void normal(char* arg){
  char buf[4];
  sprintf(buf, arg);
  printf("%s\n", buf);
}

int main(int argc, char** argv){
  printf("running...\n");
  
  if(argc <= 1){
    printf("Usage: <program> <string>");
    return -1;
  }

  normal(argv[1]);
  
  return 0;
}
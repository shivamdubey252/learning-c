#include<stdio.h>


char * getMonthName(int num) {
  switch(num) {
    case 1:
    return "January";
    case 2:
    return "february";
    default :
    return "december";
  }
}

int main() {
  int opt=1;
  char* name = getMonthName(opt);
  printf("%s", name);
  return 0;
}

#include<stdio.h>

int getMaxNumber(int a, int b, int c) {
  int max = 0;
  if(max < a) {
    max = a;
  }
  if(max < b) {
   max = b;
  }
  if(max < c) {
   max = c;
  }

  return max;
}

int main() {
  int a,b,c;
  int max = 0;
  printf("enter the number");
  scanf("%d",&a);
  printf("enter the number");
  scanf("%d",&b);
  printf("enter the number");
  scanf("%d",&c);
  /*
  if(a>b) {
    if(a>c) {
     printf("a is greatest  number");
    }
    printf("c is greatest number");
  }
  else if(b>c) {
   printf("b is greatest number");
  }
  else
   printf("c is greatest number");
   */
   max = getMaxNumber(a, b, c);
   printf("Max number is: %d\n", max);
  return 0;
}



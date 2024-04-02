#include<stdio.h>

int main() {
   int a,b,c;
   printf("Enter the value a:");
   scanf("%d",&a);
   printf("Enter the value b:");
   scanf("%d",&b);
   c=a;
   a=b;
   b=c;
   printf("After swaping :\n");
   printf("Value of a:%d",a);
   printf("Value of b;%d",b);
 return 0;
}

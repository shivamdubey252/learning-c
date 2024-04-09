#include<stdio.h>

  int main()  {
         int a,b,c;
         printf("Enter any number:");
         scanf("%d",&a);
         printf("Enter any number:");
         scanf("%d",&b);
         printf("Enter any number:");
         scanf("%d",&c);
         printf("And Get:%d\n",(a>b&&a<c));
         printf("Or Get:%d\n",(a>b||b>c));
         printf("Not Get:%d\n",(a!=b));
  return 0;
 }

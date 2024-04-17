#include<stdio.h>

    int main()   {
         int r,s,t;
         printf("Enter the number:");
         scanf("%d",&r);
         for(s=1;s<=r;s++)
         {
         for(t=1;t<=s;t++)
         {
         printf("%d ",t);
         }
         printf("\n");
         }
    return 0;
 }

#include<stdio.h>

      int main()  {
          int n,i,sq=1;
          printf("Enter the number:");
          scanf("%d",&n);
          for(i=0;i<=n;i++)
          sq=n*i;
          printf("Square number:%d",sq);
      return 0;
   }

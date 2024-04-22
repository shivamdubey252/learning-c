#include<stdio.h>

    int main()  {
         int a,i,j,k;
             printf("Enter the number:");
             scanf("%d",&a);
          for(i=1;i<=a;i++)
             {
          for(j=i;j<=a;j++)
             {
             printf(" ");
             }
          for(k=1;k<=i;k++)
             {
             printf(" * ");
             }
             printf("\n");
             }
    return 0;
  }

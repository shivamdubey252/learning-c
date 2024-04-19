#include<stdio.h>

  int main()  {
       int z,e,f;
        printf("Enter the number:");
        scanf("%d",&z);
        for(e=z;e>=1;e--)
        {
        for(f=1;f<=e;f++)
        {
        printf("%d",e);
        }
        printf("\n");
        }
  return 0;
 }

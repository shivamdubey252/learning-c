#include<stdio.h>

  int main()  {
    int x,m,n;
    printf("Enter the number:");
    scanf("%d",&x);
    for(m=x;m>=1;m--)
    {
    for(n=1;n<=m;n++)
    {
    printf(" & ");
    }
    printf("\n");
    }
    for(m=1;m<=x;m++)
    {
    for(n=1;n<=m;n++)
    {
    printf(" & ");
    }
    printf("\n");
    }
  return 0;
}

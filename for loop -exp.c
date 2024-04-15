#include<stdio.h>

int main()  {
    int n,i,j;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    for(j=i;j<=n;j++)
    {
    printf("*\n");
    }
    printf("%d\n",i);
    }
return 0;
}

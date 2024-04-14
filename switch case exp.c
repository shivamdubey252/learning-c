#include<stdio.h>

    int main()  {
            int a,b,result,opt;
            printf("Enter any number a:");
            scanf("%d",&a);
            printf("Enter any number b:");
            scanf("%d",&b);
            printf("Enter any opt\n");
            scanf("%d",&opt);
      switch(opt)  {
              case 1:
                   result=a+b;
                   printf("Added the number=%d",result);
                   break;
              case 2:
                   result=a-b;
                   printf("Subtract the number=%d",result);
                   break;
              case 3:
                   result=a*b;
                   printf("Multiply the number=%d",result);
                   break;
              case 4:
                   result=a/b;
                   printf("Divide the number=%d",result);
                   break;
              case 5:
                   result=a%b;
                   printf("Modulus the number=%d",result);
                   break;
              default:
                   printf("The number is invalid");
                   break;
                 }
    return 0;
    }

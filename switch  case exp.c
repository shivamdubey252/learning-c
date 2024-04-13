#include<stdio.h>

    int main()  {
        int a;
        char opt;
        printf("Enter the value a:\n");
        scanf("%d",&a);
         printf("Enter the value(0,1,2,3,4,5,6,7,8,9,10,11,12)\n");
         scanf("%c",&opt);
    switch (a)  {
          case 1:
               printf("January");
               break;
          case 2:
               printf("February");
               break;
          case 3:
               printf("March");
               break;
          case 4:
               printf("April");
               break;
          case 5:
               printf("May");
               break;
          case 6:
               printf("June");
               break;
          case 7:
               printf("July");
               break;
          case 8:
               printf("August");
               break;
          case 9:
               printf("September");
               break;
          case 10:
               printf("October");
               break;
          case 11:
               printf("November");
               break;
          case 12:
               printf("December");
               break;
          default:
               printf("The number is invalid");
               break;
}
     return 0;
}


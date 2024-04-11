#include<stdio.h>

   int main()  {
         int a,b,c,d,e;
          printf("\nEnter any number a:");
          scanf("%d",&a);
          printf("\nEnter any number b:");
          scanf("%d",&b);
          printf("\nEnter any number c:");
          scanf("%d",&c);
          printf("\nEnter any number d:");
          scanf("%d",&d);
          printf("\nEnter any number e:");
          scanf("%d",&e);
                if(a>b)   {
                   if(a>c)   {
                     if(a>d)   {
                       if(a>e)   {
                          printf("A is greatest");
          }
        }
      }
              printf("E is greatest");
  }
        else if(b>c)    {
                if(b>d)     {
                   if(b>e)     {
                      printf("B is greatest");
      }
              printf("E is greatest");
  }
  }
        else if(c>d)    {
                if(c>e)     {
                    printf("C is greatest");
      }
               printf("E is greatest");
  }
        else if(d>e)  {
                 printf("D is greatest");
  }
        else
            printf("E is greatest");
 return 0;
}

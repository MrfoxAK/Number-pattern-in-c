// 10101
// 01010
// 10101
// 01010
// 10101
#include <stdio.h>
int main()
{
     int c,r,k=1;
     printf("Enter The no of rows: ");
     scanf("%d",&r);
     printf("Enter The no of coloms: ");
     scanf("%d",&c);
     for (int i = 0; i < r; i++)
     {
          for (int j = 0; j < c; j++)
          {
               if (i%2==0)
               {
                   if (j%2==0)
                   {
                       printf("%d",k=1);
                   }
                   else
                   {
                       printf("%d",k=0);
                   }
               }
               else if (i%2==1)
               {
                   if (j%2==1)
                   {
                       printf("%d",k=1);
                   }
                   else
                   {
                       printf("%d",k=0);
                   }
               }
            // if (k==1)
            // {
            //     printf("1");
            // }
            // else
            // {
            //     printf("0");
            // }
            // k = k*-1;
          }
          printf("\n");
     }
     return 0;
}


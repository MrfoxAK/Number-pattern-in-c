// 11011
// 11011
// 00000
// 11011
// 11011
#include <stdio.h>
int main()
{
     int c,r,k=1,midr,midc;
     printf("Enter The no of rows: ");
     scanf("%d",&r);
     printf("Enter The no of coloms: ");
     scanf("%d",&c);
     midc = (c+1)/2;
     midr = (r+1)/2;
     for (int i = 1; i <= r; i++)
     {
          for (int j = 1; j <= c; j++)
          {
               if (i==midr || j==midc)
               {
                    printf("0");
               }
               else if((c%2 == 0 && midc+1 == j) || (r%2 == 0 && midr+1 == i))
            {
                // Print an extra 0 for even rows or columns
                    printf("0");
            }
               else
               {
                    printf("1");
               }
          }
          printf("\n");
     }
     return 0;
}


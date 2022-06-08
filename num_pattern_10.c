// // Number pattern
// 11111
// 22222
// 33333
// 44444
// 55555


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
          for (int i = 0; i < c; i++)
          {
               printf("%d",k);
          }
          printf("\n");
          k++;
     }
     return 0;
}
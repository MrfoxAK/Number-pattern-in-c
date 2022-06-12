// 55555
// 54444
// 54333
// 54322
// 54321

#include <stdio.h>

int main()
{
     int c, r, k = 5, j;
     int p;
     printf("Enter The no of rows: ");
     scanf("%d", &r);
     printf("Enter The no of coloms: ");
     scanf("%d", &c);
     // k-1;
     for (int i = 1; i <= r; i++)
     {
          k = 5;
          for (j = 1; j <= i; j++)
          {
               printf("%d", k);
               k--;
          }
          p = 5;
          for (int z = 1; z <= c - i; z++)
          {
               printf("%d", c + 1 - i);
          }
          // p--;
          // k1--;
          // k=j;
          // k++;
          printf("\n");
          p--;
     }
     // p--;
     return 0;
}
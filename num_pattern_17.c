// 12345
// 21234
// 32123
// 43212
// 54321

#include <stdio.h>

int main()
{
     int c, r, k = 1, j;
     printf("Enter The no of rows: ");
     scanf("%d", &r);
     printf("Enter The no of coloms: ");
     scanf("%d", &c);
     // k-1;
     for (int i = 1; i <= r; i++)
     {
          k = i;
          for (j = i; j > 1; j--)
          {
               printf("%d", j);
               k++;
               // i++;
          }
          for (int z = 1; z<=c+1-i; z++)
          {
               printf("%d",z);
               
          }
          printf("\n");
     }
     return 0;
}
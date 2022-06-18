#include <stdio.h>
int main()
{
     int n, c = 1;
     printf("Enter the no of rows: ");
     scanf("%d", &n);
     for (int i = 1; i <= n; i++)
     {
          for (int z = 1; z <= n-i; z++)
          {
               printf(" ");
          }
          for (int j = 1; j <= 2 * i; j++)
          {
               if (j % 2 == 1)
               {
                    printf("%d", j);
               }
          }
          for (int k = (i-1)*2-1; k >= 1; k--)
          {
               if (k%2==1)
               {
                    printf("%d",k);
               }
          }
          printf("\n");
     }
     return 0;
}
#include <stdio.h>
int main()
{
     int n, k = 1;
     printf("Enter the no of rows: ");
     scanf("%d", &n);
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= 2 * i; j++)
          {
               if (i % 2 == 0)
               {
                    if (j % 2 == 0)
                    {
                         printf("%d", j);
                    }
               }
               else if (i % 2 == 1)
               {
                    if (j % 2 == 1)
                    {
                         printf("%d", j);
                    }
               }
          }
          printf("\n");
     }
     return 0;
}
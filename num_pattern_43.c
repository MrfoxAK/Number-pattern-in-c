#include <stdio.h>
int main()
{
     int n, c = 1;
     printf("Enter the no of rows: ");
     scanf("%d", &n);
     for (int i = 1; i <= n; i++)
     {
          c=1;
          for (int z = 1; z <= n - i; z++)
          {
               printf(" ");
          }
          for (int j = 1; j <= i; j++)
          {
               printf("%d",c);
               c++;
          }
          for (int k = i-1; k >= 1; k--)
          {
               printf("%d",k);
          }

          printf("\n");
     }
     return 0;
}



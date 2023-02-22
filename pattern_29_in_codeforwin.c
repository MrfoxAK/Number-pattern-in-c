#include <stdio.h>
int main()
{
     int n;
     printf("Enter the no.of Rows: ");
     scanf("%d",&n);
     for (int i = 0; i < n; i++)
     {
          for (int j = n-i; j <= n ; j++)
          {
               printf("%d",j);
          }
          printf("\n");
     }
     return 0;
}
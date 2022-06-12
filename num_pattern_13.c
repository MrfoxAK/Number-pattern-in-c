#include <stdio.h>

int main()
{
     int c,r,k=1,j;
     printf("Enter The no of rows: ");
     scanf("%d",&r);
     printf("Enter The no of coloms: ");
     scanf("%d",&c);
     // k-1;
     for (int i = 1; i <= r; i++)
     {
          for (j = 1; j <= c; j++)
          {
               printf("%-3d",k);
               k++;
          }
          // k=j;
          // k++;
          printf("\n");
     }
     return 0;
}
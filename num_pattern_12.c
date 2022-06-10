#include <stdio.h>

int main()
{
     int c,r,k=1;
     printf("Enter The no of rows: ");
     scanf("%d",&r);
     printf("Enter The no of coloms: ");
     scanf("%d",&c);
     for (int i = 1; i <= r; i++)
     {
          for (int j = 1; j <= c; j++)
          {
               printf("%d",k);
               k++;
          }
          k=i+1;
          // k++;
          printf("\n");
     }
     return 0;
}
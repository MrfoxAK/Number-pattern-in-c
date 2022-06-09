#include <stdio.h>
int main()
{
     int c,r,k=0;
     printf("Enter The no of rows: ");
     scanf("%d",&r);
     printf("Enter The no of coloms: ");
     scanf("%d",&c);
     for (int i = 1; i <= r; i++)
     {
          for (int j = 1; j <= c; j++)
          {
               if (j==i || (j==(c+1)-i))
               {
                    printf("1");
               }
               else
               {
                    printf("0");
               }
          }
          printf("\n");    
     }
     return 0;
}


// C program to print circle box number pattern with 1 and 0
// 01110
// 10001
// 10001
// 10001
// 01110

#include <stdio.h>

int main()
{
     int rows, cols, i, j;

     /* Input rows and columns from user */
     printf("Enter number of rows: ");
     scanf("%d", &rows);
     printf("Enter number of columns: ");
     scanf("%d", &cols);

     for (i = 1; i <= rows; i++)
     {
          for (j = 1; j <= cols; j++)
          {
               /*
                * Print 1 if its first or last row
                * Print 1 if its first or last column
                */
               if (i == 1 || i == cols)
               {
                    if (j > 1 && j < rows)
                    {
                         printf("1");
                    }
                    else
                    {
                         printf("0");
                    }
               }
               else if (j==1 || j==rows)
               {
                    if (i > 1 && i < rows)
                    {
                         printf("1");
                    }
                    else
                    {
                         printf("0");
                    }
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

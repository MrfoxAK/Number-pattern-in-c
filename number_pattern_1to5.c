// // Number pattern
// // 11111
// // 11111
// // 11111
// // 11111
// // 11111

// #include <stdio.h>
// int main()
// {
//      int c,r,k=1;
//      printf("Enter The no of rows: ");
//      scanf("%d",&r);
//      printf("Enter The no of coloms: ");
//      scanf("%d",&c);
//      for (int i = 0; i < r; i++)
//      {
//           for (int i = 0; i < c; i++)
//           {
//                printf("%d",k);
//           }
//           printf("\n");
//      }
     
//      return 0;
// }



// // Number pattern
// // 11111
// // 00000
// // 11111
// // 00000
// // 11111
// #include <stdio.h>
// int main()
// {
//      int c,r;
//      printf("Enter The no of rows: ");
//      scanf("%d",&r);
//      printf("Enter The no of coloms: ");
//      scanf("%d",&c);
//      for (int i = 1; i <= r; i++)
//      {
//           for (int j = 1; j <= c; j++)
//           {
//                if (i%2==0)
//                {
//                     printf("0");
//                }
//                else{
//                     printf("1");
//                }
//           }
//           printf("\n");
//      }
//      return 0;
// }



// // Number pattern
// // 01010
// // 01010
// // 01010
// // 01010
// // 01010
// #include <stdio.h>
// int main()
// {
//      int c,r;
//      printf("Enter The no of rows: ");
//      scanf("%d",&r);
//      printf("Enter The no of coloms: ");
//      scanf("%d",&c);
//      for (int i = 1; i <= r; i++)
//      {
//           for (int j = 1; j <= c; j++)
//           {
//                if (j%2==1)
//                {
//                     printf("0");
//                }
//                else{
//                     printf("1");
//                }
//           }
//           printf("\n");
//      }
//      return 0;
// }




// /**
//  * C program to print box number pattern of 1's and 0's
//  */
// // 11111
// // 10001
// // 10001
// // 10001
// // 11111
// #include <stdio.h>

// int main()
// {
//     int rows, cols, i, j;

//     /* Input rows and columns from user */
//     printf("Enter number of rows: ");
//     scanf("%d", &rows);
//     printf("Enter number of columns: ");
//     scanf("%d", &cols);

//     for(i=1; i<=rows; i++)
//     {
//         for(j=1; j<=cols; j++)
//         {
//             /* 
//              * Print 1 if its first or last row
//              * Print 1 if its first or last column
//              */
//             if(i==1 || i==rows || j==1 || j==cols)
//             {
//                 printf("1");
//             }
//             else
//             {
//                 printf("0");
//             }
//         }

//         printf("\n");
//     }

//     return 0;
// }





// 10101
// 01010
// 10101
// 01010
// 10101

#include <stdio.h>
int main()
{
     int c,r,k=1;
     printf("Enter The no of rows: ");
     scanf("%d",&r);
     printf("Enter The no of coloms: ");
     scanf("%d",&c);
     for (int i = 0; i < r; i++)
     {
          for (int j = 0; j < c; j++)
          {
               if (i%2==0)
               {
                   if (j%2==0)
                   {
                       printf("%d",k=1);
                   }
                   else
                   {
                       printf("%d",k=0);
                   }
               }
               else if (i%2==1)
               {
                   if (j%2==1)
                   {
                       printf("%d",k=1);
                   }
                   else
                   {
                       printf("%d",k=0);
                   }
               }
            // if (k==1)
            // {
            //     printf("1");
            // }
            // else
            // {
            //     printf("0");
            // }
            // k = k*-1;
          }
          printf("\n");
     }
     return 0;
}






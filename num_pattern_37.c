/**
 * C program to print the given number pattern
 */
// 1
// 01
// 010
// 1010
// 10101

#include <stdio.h>
int main()
{
     int n,k=1;
     printf("Enter the no of rows: ");
     scanf("%d",&n);
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= i; j++)
          {
               if (k==-1)
               {
                    printf("0");
               }
               else
               {
                    printf("%d",k);
                    // printf("1"); 
               }
               k*=-1;
          }
          printf("\n");
     }
     return 0;
}





// #include <stdio.h>

// int main()
// {
//     int i, j, k, N;

//     printf("Enter N: ");
//     scanf("%d", &N);

//     // k represents the current integer
//     k = 1;

//     for(i=1; i<=N; i++)
//     {
//         for(j=1; j<=i; j++)
//         {
//             // Print 1 if current integer k is odd
//             if(k % 2 == 1)
//             {
//                 printf("1");
//             }
//             else
//             {
//                 printf("0");
//             }

//             k++;
//         }

//         printf("\n");
//     }

//     return 0;
// }
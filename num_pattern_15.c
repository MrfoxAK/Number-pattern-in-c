// 12345
// 23454
// 34545
// 45454
// 54545
// #include <stdio.h>

// int main()
// {
//      int c, r, k = 1, j;
//      printf("Enter The no of rows: ");
//      scanf("%d", &r);
//      printf("Enter The no of coloms: ");
//      scanf("%d", &c);
//      // k-1;
//      for (int i = 1; i <= r; i++)
//      {
//           k = i;
//           for (j = 1; j <= c; j++)
//           {
//                if (k < c)
//                {
//                     printf("%d", k);
//                     k++;
//                }
//                else if (k>=c)
//                {
//                     printf("%d",k);
//                     k--;
//                }
//           }
//           // k=j;
//           // k++;
//           printf("\n");
//      }
//      return 0;
// }







// 12345
// 23451
// 34521
// 45321
// 54321

#include <stdio.h>

int main()
{
     int c, r, k = 1, j;
     printf("Enter The no of rows: ");
     scanf("%d", &r);
     printf("Enter The no of coloms: ");
     scanf("%d", &c);
     // k-1;
     for (int i = 1; i <= r; i++)
     {
          k = i;
          for (j = 1; j <= c+1-i; j++)
          {
               printf("%d", k);
               k++;
          }
          for (int z = i-1; z>=1; z--)
          {
               printf("%d",z);
          }
          printf("\n");
     }
     return 0;
}
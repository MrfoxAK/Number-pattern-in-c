// // // Number pattern
// // 11111
// // 22222
// // 33333
// // 44444
// // 55555


// #include <stdio.h>
// int main()
// {
//      int c,r,k=1;
//      printf("Enter The no of rows: ");
//      scanf("%d",&r);
//      printf("Enter The no of coloms: ");
//      scanf("%d",&c);
//      for (int i = 1; i <= r; i++)
//      {
//           for (int j = 1; j <= c; j++)
//           {
//                printf("%d",i);
//           }
//           printf("\n");
//           k++;
//      }
//      return 0;
// }





// // Number pattern
// 12345
// 12345
// 12345
// 12345
// 12345


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
               printf("%d",j);
          }
          printf("\n");
          k++;
     }
     return 0;
}
/**
 * C program to print the given number pattern
 */
#include <stdio.h>
int main()
{
     int num,c=0,n;
     printf("Enter the number : ");
     scanf("%d",&num);
     n = num;
     while (num>0)
     {
          num/=10;
          c++;
     }
     // printf("%d",c);
     for (int i = 1; i <= c; i++)
     {
          for (int j = 1; j <= +1; j++)
          {
               printf("%d",n);
          }
          n/=10;
          printf("\n");
     }
     return 0;
}


// #include <stdio.h>

// int main()
// {
//     int num;

//     printf("Enter any number: ");
//     scanf("%d", &num);

//     while(num != 0)
//     {
//         printf("%d\n", num);
//         num = num / 10;
//     }

//     return 0;
// }
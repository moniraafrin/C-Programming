#include<stdio.h>
int main()
{
     int n,i,j,k;
     printf("Enter the value of N: ");
     scanf("%d",&n);

     for(i = n; i >= 1; i--)
     {
         for(k = 1; k <= n-i; k++)
         {
             printf(" ");
         }
           for(j = 1; j <= i*2-1; j++)
           {
                printf("*");
           }
         printf("\n");
     }
}

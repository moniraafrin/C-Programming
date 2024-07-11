#include<stdio.h>
int main()
{
     int n,i,j,k;
     printf("Enter the value of N: ");
     scanf("%d",&n);

     for(i = 1; i <= n; i++)
     {
         for(k = 1; k <= n-i; k++)
         {
             printf(" ",k);
         }
           for(j = 1; j <= i*2-1; j++)
           {
                printf("*",j);
           }
         printf("\n");
     }
     for(i = n-1; i >= 1; i--)
     {
         for(k = 1; k <= n-i; k++)
         {
             printf(" ",k);
         }
           for(j = 1; j <= i*2-1; j++)
           {
                printf("*",j);
           }
         printf("\n");
     }
}


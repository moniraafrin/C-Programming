#include<stdio.h>
int main()
{
     int n,i,j,k;
     printf("Enter the value of N: ");
     scanf("%d",&n);

     for(i = 1; i <= n; i++)
     {
       for(j = 1; j <= n-i; j++)
       {
           printf(" ");
       }
       for(k = 1; k <= i; k++)
       {
           printf("%d",k);
       }

       for(k = i-1; k >= 1; k--)
        printf("%d",k);

       printf("\n");

     }


     for(i = n-1; i >= 1; i--)
     {
       for(j = 1; j <= n-i; j++)
       {
           printf(" ");
       }
       for(k = 1; k <= i; k++)
       {
           printf("%d",k);
       }

       for(k = i-1; k >= 1; k--)
        printf("%d",k);

       printf("\n");

     }
}

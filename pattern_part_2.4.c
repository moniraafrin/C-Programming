#include<stdio.h>
int main()
{
     int n,i,j,k;
     printf("Enter the value of N: ");
     scanf("%d",&n);

     for(i = 1; i <= n; i++)
     {
       for(j = 1; j <= i; j++)
       {
           if(i == n || i == j || j == 1)
           {
               printf("*");
           }
           else
            printf(" ");
       }
       printf("\n");
     }

}

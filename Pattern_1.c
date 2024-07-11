#include<stdio.h>
int main()
{
    int row,colum, n;

    printf("Enter N = ");
    scanf("%d", &n);

    for(row = 1; row <= n; row++)
    {
            //printing stars
            for(colum = 1; colum <= row; colum++)
            {
                printf(" %d ", row);
            }
            printf("\n");
        }
}


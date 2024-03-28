#include<stdio.h>

int main()
{
    int i,j;
    int a[3][4],b[3][4],c[3][4];

//scanning A Matrix

    printf("Enter elements for A matrix: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

//scanning B Matrix

    printf("\nEnter elements for B matrix: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

//printing A Matrix

    printf("A = ");
    for(i = 0; i < 3; i++)
    {
        printf("\t");
        for(j = 0; j < 4; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

//printing B Matrix

    printf("\nB = ");
    for(i = 0; i < 3; i++)
    {
        printf("\t");
        for(j = 0; j < 4; j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
//Addition A and B Matrix

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
//printing C Matrix

    printf("\nA + B = ");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
        printf("\t");
    }

    return 0;
}

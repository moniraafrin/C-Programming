//Reverse array
#include<stdio.h>
int main()
{
    int num[100],n,i;
    printf("How Many Numbers of Elements:");
    scanf("%d",&n);

    printf("Enter Elements Number of Array: ");

    for(i = 1; i <= n; i++)
    {
        scanf("%d",&num[i]);
    }

    printf("Array is : ");
    for(i = 1; i <= n; i++)
        printf(" %d", num[i]);

    printf("\nAfter Reverse array :\n");
    for (i = n; i >= 1; i--)
    {
        printf(" %d", num[i]);
    }

}

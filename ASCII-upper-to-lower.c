#include<stdio.h>
int main()
{


    char upper,lower;
    printf("Enter any uppercase letter: ");
    scanf("%c",&upper);
    lower = tolower(upper);
    printf("The lowercase letter is: %c\n",lower);

return 0;

}

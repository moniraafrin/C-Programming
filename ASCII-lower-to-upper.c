#include<stdio.h>
int main()
{


    char upper,lower;
    printf("Enter any lowercase letter: ");
    scanf("%c",&lower);
    upper = toupper(lower);
    printf("The uppercase letter is: %c\n",upper);

return 0;

}

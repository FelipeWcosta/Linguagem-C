#include <stdio.h>
int main(){
    int myage;
    printf("Type your age here: ");
    scanf("%i", &myage);
    if (myage >= 18)
    {
        printf("You're of legal age. Your age is: %i.", myage);
    }
    else
    {
        printf("You aren't of legal age. Your age is: %i.", myage);
    }
    return 0;
}
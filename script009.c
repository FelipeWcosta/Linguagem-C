#include <stdio.h>
int main(){
    int i = 0;
    do
    {
        printf("The count variable i is: %i.", i);
        i = i + 1;
    } while (i == 0);
    return 0;
}
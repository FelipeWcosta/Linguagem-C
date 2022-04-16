#include <stdio.h>
int main(){
    int value;
    int resp = 1;
    printf("Type some number: ");
    scanf("%i", &value);
    for (;value >= 1;--value)
    {
        resp = (resp * value);
    }
    printf("The factorial value is: %i.\n", resp);
    return 0;
}
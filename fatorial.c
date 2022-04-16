#include <stdio.h>
int main(){
    int value;
    int v;
    printf("Type some number: ");
    scanf("%i", &value);
    for (value; value <= 1; v = value - 1)
    {
        value = value * v;
    }
    printf("The factorial value is: %i.\n", v);
    return 0;
}
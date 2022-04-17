#include <stdio.h>
int main(){
    int op;
    float num1;
    float num2;
    float result;
    printf("Type the first number: ");
    scanf("%f", &num1);
    printf("Type the second number: ");
    scanf("%f", &num2);
    printf("Choose the operation: [0] to sum, [1] to sub, [2] to mul and [3] to div.\n");
    scanf("%i", &op);
    if (op == 0)
    {
        result = num1 + num2;
    }
    else if (op == 1)
    {
        result = num1 - num2;
    }
    else if (op == 2)
    {
        result = num1*num2;
    }
    else if (op == 3)
    {
        result = num1/num2;
    }
    else
    {
        printf("Error.");
    }
printf("The result is: %.2f", result);
    return 0;
}
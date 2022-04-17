#include <stdio.h>
int main(){
    int data [3] = {5, 5, 5};
    int cont = 0;
    int i;
    for (i = 0; i < 3; i++)
    {
        if (data [i] == 5)
        {
            cont = cont + 1;
        }
    }
    printf("The number of elements equal to five is: %i.", cont);
    return 0;
}
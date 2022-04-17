#include <stdio.h>
int main(){
    int vec[5] = {11, 11, 11, 22, 11};
    int i;
    int k;
    int aux;
    //int len = sizeof(vec);
    for (i = 0; i < 5; i++)
    {
        for (k = 0; k < 5; k++)
        {
            if (vec[i] > vec[k])
            {
                vec[i] = vec[i];
                vec[k] = vec[k];
            }
            else if (vec[i] < vec[k])
            {
                aux = vec[i];
                vec[i] = vec[k];
                vec[k] = aux;
            }
        } 
    }
    printf("vec = (%i, %i, %i, %i, %i)", vec[0], vec[1], vec[2], vec[3], vec[4]);
    return 0;
}
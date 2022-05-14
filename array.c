#include <stdio.h>
int main(){
    //Incicalizacao das variaveis
    int i;
    int k;
    int aux;
    int vec[3] = {0, 0, 0};
    int len = 3;

    //Recebimento dos elementos do vetor
    for (i = 0; i < len; i++)
    {
        printf("Digite o valor do elemento: ");
        scanf("%i", &vec[i]);
    }

    //Print do vetor desordenado
    printf("Vetor desordenado: \n");
    for (i = 0; i < len; i++)
    {
        printf("%i ", &vec[i]);
    }
    
    
    //Ordenacao do vetor
    for (i = 0; i < len; i++)
    {
        for (k = 0; k < 4; k++)
        {
            if (vec[i] < vec[k])
            {
                aux = vec[i];
                vec[i] = vec[k];
                vec[k] = aux;
            }
        } 
    }

    //Print do vetor ordenado
    printf("\n");
    printf("Vetor ordenado: \n");
    for (i = 0; i < len; i++)
    {
        printf("%i ", &vec[i]);
    }
    
    return 0;
}
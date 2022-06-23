#include <stdio.h>
int main(){
    //Incicalizacao das variaveis
    int aux;
    int len;
    printf("Digite o comprimento do vetor: ");
    scanf("%i", &len);
    int vec[len];

    //Recebimento dos elementos do vetor
    for (int i = 0; i < len; i++)
    {
        printf("Digite o valor do elemento: ");
        scanf("%i", &vec[i]);
    }

    //Print do vetor desordenado
    printf("Vetor desordenado: \n");
    for (int i = 0; i < len; i++)
    {
        printf("%i ", vec[i]);
    }
    
    
    //Ordenacao do vetor
    for (int i = 0; i < len; i++)
    {
        for (int k = 0; k < 4; k++)
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
    printf("\nVetor ordenado: \n");
    for (int i = 0; i < len; i++)
    {
        printf("%i ", vec[i]);
    }
    return 0;
}
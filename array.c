#include <stdio.h>
int main(){
    //Incicalizacao das variaveis
    int len;
    int i;
    int k;
    int aux;
    int array[len];

    //Recebimento da quantidade de elementos do vetor
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%i", &len);

    //Recebimento dos elementos do vetor
    for (i = 0; i < len; i++)
    {
        printf("Digite o valor do elemento: ");
        scanf("%f", &array[i]);
    }

    //Print do vetor desordenado
    for (i = 0; i < len; i++)
    {
        printf("Vetor desordenado: \n");
        printf("%i ", &array[i]);
    }
    
    
    //Ordenacao do vetor
    for (i = 0; i < len; i++)
    {
        for (k = 0; k < 4; k++)
        {
            if (array[i] < array[k])
            {
                aux = array[i];
                array[i] = array[k];
                array[k] = aux;
            }
        } 
    }

    //Print do vetor ordenado
    for (i = 0; i < len; i++)
    {
        printf("Vetor ordenado: \n");
        printf("%i ", &array[i]);
    }
    
    return 0;
}
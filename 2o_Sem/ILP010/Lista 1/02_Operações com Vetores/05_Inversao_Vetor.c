#include <stdio.h>
#include <stdlib.h>

// Função para ordenar em ordem crescente
void bubbleSortAsc(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Troca os elementos se estiverem fora de ordem
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Função para ordenar em ordem decrescente
void bubbleSortDesc(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                // Troca os elementos se estiverem fora de ordem
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int *arr;
    int size, i;

    // Pedindo ao usuário o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &size);

    // Alocando memória para o vetor
    arr = (int *)malloc(size * sizeof(int));

    // Pedindo ao usuário os elementos do vetor
    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Ordenando em ordem crescente
    bubbleSortAsc(arr, size);

    // Imprimindo o vetor ordenado em ordem crescente
    printf("Vetor em ordem crescente:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ordenando em ordem decrescente
    bubbleSortDesc(arr, size);

    // Imprimindo o vetor ordenado em ordem decrescente
    printf("Vetor em ordem decrescente:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Liberando memória alocada para o vetor
    free(arr);

    return 0;
}

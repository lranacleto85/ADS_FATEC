#include <stdio.h>
#include <stdlib.h>

// Função para concatenar dois vetores em um novo vetor
void concatenarVetores(int vetor1[], int tamanho1, int vetor2[], int tamanho2, int resultado[])
{
    int pos = 0;

    // Copia os elementos do primeiro vetor para o vetor resultado
    for (int i = 0; i < tamanho1; ++i)
    {
        resultado[pos++] = vetor1[i];
    }

    // Copia os elementos do segundo vetor para o vetor resultado
    for (int j = 0; j < tamanho2; ++j)
    {
        resultado[pos++] = vetor2[j];
    }
}

int main()
{
    int tamanho1, tamanho2;

    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &tamanho1);
    printf("Digite os elementos do primeiro vetor:\n");
    int *vetor1 = (int *)malloc(tamanho1 * sizeof(int));
    for (int i = 0; i < tamanho1; ++i)
    {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &tamanho2);
    printf("Digite os elementos do segundo vetor:\n");
    int *vetor2 = (int *)malloc(tamanho2 * sizeof(int));
    for (int i = 0; i < tamanho2; ++i)
    {
        scanf("%d", &vetor2[i]);
    }

    // Vetor para armazenar o resultado da concatenação
    int *resultado = (int *)malloc((tamanho1 + tamanho2) * sizeof(int));

    // Chama a função para concatenar os vetores
    concatenarVetores(vetor1, tamanho1, vetor2, tamanho2, resultado);

    // Imprime os vetores digitados pelo usuário
    printf("Primeiro vetor digitado:\n");
    for (int i = 0; i < tamanho1; ++i)
    {
        printf("%d%s", vetor1[i], (i < tamanho1 - 1) ? "   " : "\n");
    }

    printf("Segundo vetor digitado:\n");
    for (int i = 0; i < tamanho2; ++i)
    {
        printf("%d%s", vetor2[i], (i < tamanho2 - 1) ? "   " : "\n");
    }

    // Imprime o vetor concatenado
    printf("Vetor concatenado:\n");
    for (int i = 0; i < tamanho1 + tamanho2; ++i)
    {
        printf("%d%s", resultado[i], (i < tamanho1 + tamanho2 - 1) ? "   " : "\n");
    }

    // Libera a memória alocada para os vetores e o resultado
    free(vetor1);
    free(vetor2);
    free(resultado);

    return 0;
}

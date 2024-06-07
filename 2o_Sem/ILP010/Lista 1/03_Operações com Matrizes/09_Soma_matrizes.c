#include <stdio.h>

// Função para ler uma matriz
void lerMatriz(int matriz[][100], int ordem)
{
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < ordem; ++i)
    {
        for (int j = 0; j < ordem; ++j)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Função para imprimir uma matriz
void imprimirMatriz(int matriz[][100], int ordem)
{
    for (int i = 0; i < ordem; ++i)
    {
        for (int j = 0; j < ordem; ++j)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Função para somar duas matrizes
void somarMatrizes(int matriz1[][100], int matriz2[][100], int resultado[][100], int ordem)
{
    for (int i = 0; i < ordem; ++i)
    {
        for (int j = 0; j < ordem; ++j)
        {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main()
{
    int ordem;

    // Solicita ao usuário a ordem das matrizes
    printf("Digite a ordem das matrizes (número de linhas e colunas): ");
    scanf("%d", &ordem);

    int matriz1[100][100], matriz2[100][100], resultado[100][100];

    // Ler a primeira matriz
    printf("Para a primeira matriz:\n");
    lerMatriz(matriz1, ordem);

    // Ler a segunda matriz
    printf("Para a segunda matriz:\n");
    lerMatriz(matriz2, ordem);

    // Soma as duas matrizes
    somarMatrizes(matriz1, matriz2, resultado, ordem);

    // Imprime a matriz resultado
    printf("A soma das duas matrizes é:\n");
    imprimirMatriz(resultado, ordem);

    return 0;
}

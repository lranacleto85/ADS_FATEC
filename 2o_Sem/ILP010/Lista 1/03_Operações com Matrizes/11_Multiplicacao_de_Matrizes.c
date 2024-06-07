#include <stdio.h>

// Função para ler uma matriz
void lerMatriz(int matriz[][100], int linhas, int colunas)
{
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; ++i)
    {
        for (int j = 0; j < colunas; ++j)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Função para imprimir uma matriz
void imprimirMatriz(int matriz[][100], int linhas, int colunas)
{
    for (int i = 0; i < linhas; ++i)
    {
        for (int j = 0; j < colunas; ++j)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Função para multiplicar duas matrizes
void multiplicarMatrizes(int matriz1[][100], int matriz2[][100], int resultado[][100], int linhas1, int colunas1, int colunas2)
{
    for (int i = 0; i < linhas1; ++i)
    {
        for (int j = 0; j < colunas2; ++j)
        {
            resultado[i][j] = 0;
            for (int k = 0; k < colunas1; ++k)
            {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

int main()
{
    int linhas1, colunas1, linhas2, colunas2;

    // Solicita ao usuário o tamanho das matrizes
    printf("Digite o número de linhas e colunas da primeira matriz: ");
    scanf("%d %d", &linhas1, &colunas1);

    printf("Digite o número de linhas e colunas da segunda matriz: ");
    scanf("%d %d", &linhas2, &colunas2);

    if (colunas1 != linhas2)
    {
        printf("Erro: O número de colunas da primeira matriz deve ser igual ao número de linhas da segunda matriz.\n");
        return 1;
    }

    int matriz1[100][100], matriz2[100][100], resultado[100][100];

    // Ler a primeira matriz
    printf("Para a primeira matriz:\n");
    lerMatriz(matriz1, linhas1, colunas1);

    // Ler a segunda matriz
    printf("Para a segunda matriz:\n");
    lerMatriz(matriz2, linhas2, colunas2);

    // Multiplica as duas matrizes
    multiplicarMatrizes(matriz1, matriz2, resultado, linhas1, colunas1, colunas2);

    // Imprime a matriz resultado
    printf("O resultado da multiplicação das duas matrizes é:\n");
    imprimirMatriz(resultado, linhas1, colunas2);

    return 0;
}

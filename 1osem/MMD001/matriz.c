#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MAX_SIZE 4

int randomInRange(int min, int max)
{
    return min + rand() % (max - min + 1);
}

void gerarMatriz(int linhas, int colunas, int matriz[][colunas])
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] = randomInRange(0, 9);
        }
    }
}

void imprimirMatriz(int linhas, int colunas, int matriz[][colunas])
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int determinante(int ordem, int matriz[][ordem])
{
    if (ordem == 1)
    {
        return matriz[0][0];
    }
    int det = 0;
    for (int i = 0; i < ordem; i++)
    {
        int submatriz[ordem - 1][ordem - 1];
        for (int j = 1; j < ordem; j++)
        {
            for (int k = 0; k < ordem - 1; k++)
            {
                submatriz[j - 1][k] = matriz[j][k < i ? k : k + 1];
            }
        }
        det += matriz[0][i] * pow(-1, i) * determinante(ordem - 1, submatriz);
    }
    return det;
}

int main()
{
    srand(time(NULL));
    int op, linhas, colunas;
    printf("Informe o numero de linhas das matrizes (1 a %d): ", MAX_SIZE);
    scanf("%d", &linhas);
    printf("Informe o numero de colunas das matrizes (1 a %d): ", MAX_SIZE);
    scanf("%d", &colunas);
    printf("Digite a operacao desejada (1 - Soma, 2 - Subtracao, 3 - Multiplicacao, 4 - Determinante): ");
    scanf("%d", &op);

    int matrizA[MAX_SIZE][MAX_SIZE], matrizB[MAX_SIZE][MAX_SIZE];
    gerarMatriz(linhas, colunas, matrizA);
    gerarMatriz(linhas, colunas, matrizB);

    switch (op)
    {
    case 1:
        printf("Matriz A:\n");
        imprimirMatriz(linhas, colunas, matrizA);
        printf("\nMatriz B:\n");
        imprimirMatriz(linhas, colunas, matrizB);
        printf("\nMatriz Soma:\n");
        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                printf("%d ", matrizA[i][j] + matrizB[i][j]);
            }
            printf("\n");
        }
        break;
    case 2:
        printf("Matriz A:\n");
        imprimirMatriz(linhas, colunas, matrizA);
        printf("\nMatriz B:\n");
        imprimirMatriz(linhas, colunas, matrizB);
        printf("\nMatriz Subtracao:\n");
        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                printf("%d ", matrizA[i][j] - matrizB[i][j]);
            }
            printf("\n");
        }
        break;
    case 3:
        printf("Matriz A:\n");
        imprimirMatriz(linhas, colunas, matrizA);
        printf("\nMatriz B:\n");
        imprimirMatriz(linhas, colunas, matrizB);
        printf("\nMatriz Multiplicacao:\n");
        if (colunas != linhas)
        {
            printf("Numero de colunas da matriz A deve ser igual ao numero de linhas da matriz B para multiplicacao!\n");
            break;
        }
        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                int multiplicacao = 0;
                for (int k = 0; k < colunas; k++)
                {
                    multiplicacao += matrizA[i][k] * matrizB[k][j];
                }
                printf("%d ", multiplicacao);
            }
            printf("\n");
        }
        break;
    case 4:
        if (linhas != colunas)
        {
            printf("A matriz para cálculo do determinante deve ser quadrada!\n");
            break;
        }
        printf("Matriz A:\n");
        imprimirMatriz(linhas, colunas, matrizA);
        printf("\nDeterminante da Matriz A: %d\n", determinante(linhas, matrizA));
        break;
    default:
        printf("Operacao invalida!\n");
    }
    return 0;
}

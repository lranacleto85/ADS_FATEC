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

// Função para transpor uma matriz
void transporMatriz(int matriz[][100], int transposta[][100], int ordem)
{
    for (int i = 0; i < ordem; ++i)
    {
        for (int j = 0; j < ordem; ++j)
        {
            transposta[j][i] = matriz[i][j];
        }
    }
}

int main()
{
    int ordem;

    // Solicita ao usuário a ordem da matriz
    printf("Digite a ordem da matriz (número de linhas e colunas): ");
    scanf("%d", &ordem);

    int matriz[100][100], transposta[100][100];

    // Ler a matriz
    lerMatriz(matriz, ordem);

    // Transpõe a matriz
    transporMatriz(matriz, transposta, ordem);

    // Imprime a matriz transposta
    printf("A matriz transposta é:\n");
    imprimirMatriz(transposta, ordem);

    return 0;
}

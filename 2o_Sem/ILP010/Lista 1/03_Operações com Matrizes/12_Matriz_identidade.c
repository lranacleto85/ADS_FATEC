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

// Função para verificar se uma matriz é identidade
int verificarIdentidade(int matriz[][100], int ordem)
{
    for (int i = 0; i < ordem; ++i)
    {
        for (int j = 0; j < ordem; ++j)
        {
            if (i == j && matriz[i][j] != 1)
            {
                return 0; // Não é uma matriz identidade
            }
            else if (i != j && matriz[i][j] != 0)
            {
                return 0; // Não é uma matriz identidade
            }
        }
    }
    return 1; // É uma matriz identidade
}

int main()
{
    int ordem;

    // Solicita ao usuário a ordem da matriz
    printf("Digite a ordem da matriz: ");
    scanf("%d", &ordem);

    int matriz[100][100];

    // Ler a matriz
    lerMatriz(matriz, ordem);

    // Verifica se a matriz é identidade
    if (verificarIdentidade(matriz, ordem))
    {
        printf("A matriz é uma matriz identidade.\n");
    }
    else
    {
        printf("A matriz NÃO é uma matriz identidade.\n");
    }

    return 0;
}

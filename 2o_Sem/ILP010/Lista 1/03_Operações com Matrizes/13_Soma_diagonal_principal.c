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

// Função para somar os elementos da diagonal principal de uma matriz
int somarDiagonalPrincipal(int matriz[][100], int ordem)
{
    int soma = 0;
    for (int i = 0; i < ordem; ++i)
    {
        soma += matriz[i][i];
    }
    return soma;
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

    // Soma os elementos da diagonal principal
    int somaDiagonalPrincipal = somarDiagonalPrincipal(matriz, ordem);

    // Imprime a soma dos elementos da diagonal principal
    printf("A soma dos elementos da diagonal principal é: %d\n", somaDiagonalPrincipal);

    return 0;
}

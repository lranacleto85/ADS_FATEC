#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int tamanho;
    printf("\n Qual dimensao do vetor (par): ");
    scanf(" %d ", &tamanho);

    if (tamanho % 2 != 0) {
        printf("Erro: A dimensao do vetor deve ser par.\n");
        return 1;
    }

    int vetor[tamanho];
    int metade = tamanho / 2;
    int i;

    for (i = metade; i < tamanho; i++) {
        printf("valor posicao %d: ", i);
        scanf(" %d ", &vetor[i]);
    }

    for (i = 0; i < metade; i++) {
        printf("valor posicao %d: ", i);
        scanf(" %d ", &vetor[i]);
    }
    for (i=0; i< tamanho; i++)
    {
        printf("| [%d] - [%d] ", i, vetor[i]);
    }
    // Pesquisa no vetor
    int pesquisa, posicao, encontrado = 0;
    printf("\npesquisa no vetor");
    scanf(" %d ", &pesquisa);
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == pesquisa) {
            encontrado = 1;
            posicao = i;
            break;
        }
    }

    if (encontrado == 1) {
        printf("O valor %d foi encontrado na posicao %d\n", pesquisa, posicao);
    } else {
        printf("O valor %d nao foi encontrado no vetor\n", pesquisa);
    }
    return 0;
}
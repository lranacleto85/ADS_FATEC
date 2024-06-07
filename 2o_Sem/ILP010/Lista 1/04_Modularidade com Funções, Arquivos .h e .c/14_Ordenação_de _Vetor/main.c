#include <stdio.h>
#include "ordenacao.h"

int main() {
    int vetor[] = {12, 5, 6, 2, 9, 3, 8, 10, 4, 7};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor antes da ordenacao:\n");
    for (int i = 0; i < tamanho; ++i) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Chama a função de ordenação
    ordenarVetor(vetor, tamanho);

    printf("Vetor depois da ordenacao:\n");
    for (int i = 0; i < tamanho; ++i) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

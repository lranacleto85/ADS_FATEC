#include "ordenacao.h"

void ordenarVetor(int vetor[], int tamanho) {
    // Algoritmo de ordenação (exemplo: Bubble Sort)
    for (int i = 0; i < tamanho - 1; ++i) {
        for (int j = 0; j < tamanho - i - 1; ++j) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

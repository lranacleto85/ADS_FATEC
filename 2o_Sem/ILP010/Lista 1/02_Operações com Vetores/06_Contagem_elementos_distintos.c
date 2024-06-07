#include <stdio.h>

#define MAX_SIZE 100

// Função para contar elementos distintos em um vetor
int contarElementosDistintos(int vetor[], int tamanho) {
    int distintos = 0;
    int marcador[MAX_SIZE] = {0}; // Vetor auxiliar para marcar os elementos já encontrados

    for (int i = 0; i < tamanho; i++) {
        if (marcador[vetor[i]] == 0) {
            marcador[vetor[i]] = 1;
            distintos++;
        }
    }

    return distintos;
}

int main() {
    int vetor[MAX_SIZE];
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    int elementosDistintos = contarElementosDistintos(vetor, tamanho);

    printf("Número de elementos distintos: %d\n", elementosDistintos);

    return 0;
}

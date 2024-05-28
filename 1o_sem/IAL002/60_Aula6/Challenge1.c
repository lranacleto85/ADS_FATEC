#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetorA[tamanho];
    int vetorB[tamanho];

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor da posicao %d do vetor: ", i);
        scanf("%d", &vetorA[i]);
    }

    // Copia os valores do vetor A para o vetor B
    for (int i = 0; i < tamanho; i++) {
        vetorB[i] = vetorA[i];
    }

    // Ordena o vetor B em ordem crescente
    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (vetorB[i] > vetorB[j]) {
                int temp = vetorB[i];
                vetorB[i] = vetorB[j];
                vetorB[j] = temp;
            }
        }
    }

    // Imprime o vetor B
    printf("Valores em ordem crescente:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorB[i]);
    }

    printf("\n");

    return 0;
}
 
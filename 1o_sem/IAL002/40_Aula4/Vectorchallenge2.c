#include <stdio.h>
#include <stdlib.h>

void lerVetor(int *vetor, int tamanho) {
    printf("Digite os elementos do vetor separados por espaço:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
}

void ordenarVetores(int *vetores[], int n, int sizes[]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < sizes[i]; j++) {
            for (int k = j + 1; k < sizes[i]; k++) {
                if (vetores[i][j] > vetores[i][k]) {
                    int temp = vetores[i][j];
                    vetores[i][j] = vetores[i][k];
                    vetores[i][k] = temp;
                }
            }
        }
    }
}

void imprimirVetores(int *vetores[], int n, int sizes[]) {
    printf("Vetores em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("Vetor %d:", i + 1);
        for (int j = 0; j < sizes[i]; j++) {
            printf(" %d", vetores[i][j]);
        }
        printf("\n");
    }

}

int main() {
    int n;

    printf("Digite a quantidade de vetores: ");
    scanf("%d", &n);

    int *vetores[n];
    int sizes[n];

    for (int i = 0; i < n; i++) {
        int tamanho;
        printf("Digite o tamanho do vetor %d: ", i + 1);
        scanf("%d", &tamanho);

        sizes[i] = tamanho;
        vetores[i] = (int *)malloc(tamanho * sizeof(int));

        printf("Digite os elementos do vetor %d:\n", i + 1);
        lerVetor(vetores[i], tamanho);
    }

    ordenarVetores(vetores, n, sizes);

    imprimirVetores(vetores, n, sizes);

    // Libera a memória alocada para os vetores
    for (int i = 0; i < n; i++) {
        free(vetores[i]);
    }

    return 0;
}
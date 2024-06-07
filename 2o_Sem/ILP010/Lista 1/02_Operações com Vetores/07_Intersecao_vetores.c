#include <stdio.h>

#define MAX_SIZE 100

// Função para verificar se um elemento está presente em um vetor
int estaPresente(int vetor[], int tamanho, int elemento) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == elemento) {
            return 1; // Retorna 1 se o elemento estiver presente no vetor
        }
    }
    return 0; // Retorna 0 se o elemento não estiver presente no vetor
}

// Função para encontrar e imprimir a interseção entre dois vetores
void encontrarIntersecao(int vetor1[], int tamanhoVetor1, int vetor2[], int tamanhoVetor2) {
    printf("Interseção dos vetores:\n");

    // Percorre o primeiro vetor
    for (int i = 0; i < tamanhoVetor1; i++) {
        // Verifica se o elemento atual do primeiro vetor está presente no segundo vetor
        if (estaPresente(vetor2, tamanhoVetor2, vetor1[i])) {
            printf("%d ", vetor1[i]); // Se estiver presente, imprime o elemento
        }
    }
    printf("\n");
}

int main() {
    int vetor1[MAX_SIZE], vetor2[MAX_SIZE];
    int tamanhoVetor1, tamanhoVetor2;

    // Solicita ao usuário o tamanho e os elementos do primeiro vetor
    printf("Digite o tamanho do primeiro vetor (de 1 a %d): ", MAX_SIZE);
    scanf("%d", &tamanhoVetor1);

    if (tamanhoVetor1 > MAX_SIZE) {
        printf("Error: The entered size is greater than MAX_SIZE\n");
        return 1;
    }

    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanhoVetor1; i++) {
        scanf("%d", &vetor1[i]);
    }

    // Solicita ao usuário o tamanho e os elementos do segundo vetor
    printf("Digite o tamanho do segundo vetor (de 1 a %d): ", MAX_SIZE);
    scanf("%d", &tamanhoVetor2);

    if (tamanhoVetor2 > MAX_SIZE) {
        printf("Error: The entered size is greater than MAX_SIZE\n");
        return 1;
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanhoVetor2; i++) {
        scanf("%d", &vetor2[i]);
    }

    // Encontra e imprime a interseção entre os dois vetores
    encontrarIntersecao(vetor1, tamanhoVetor1, vetor2, tamanhoVetor2);

    return 0;
}
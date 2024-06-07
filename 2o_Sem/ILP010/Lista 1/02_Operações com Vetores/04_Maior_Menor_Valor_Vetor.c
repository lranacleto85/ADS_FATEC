#include <stdio.h>

int main() {
    // Declaração de variáveis
    int vetor[10]; // Vetor para armazenar os números inseridos pelo usuário
    int i, maior, menor; // Variáveis para controle dos loops e para armazenar o maior e menor valores

    // Loop para receber os números do usuário e armazená-los no vetor
    for(i = 0; i < 10; i++) {
        printf("Entre com um número inteiro %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Inicialização das variáveis 'maior' e 'menor' com o primeiro elemento do vetor
    maior = vetor[0];
    menor = vetor[0];

    // Loop para encontrar o maior e o menor valor no vetor
    for(i = 0; i < 10; i++) {
        // Verifica se o valor atual do vetor é maior que o valor armazenado na variável 'maior'
        if(vetor[i] > maior) {
            maior = vetor[i]; // Atualiza o maior valor encontrado até agora
        }
        // Verifica se o valor atual do vetor é menor que o valor armazenado na variável 'menor'
        if(vetor[i] < menor) {
            menor = vetor[i]; // Atualiza o menor valor encontrado até agora
        }
    }

    // Imprime o maior e o menor valor encontrado
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}

#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar a soma, a média, a quantidade de números inseridos e o número atual
    float soma = 0, media;
    int quantidade = 0, numero;

    // Solicita ao usuário que digite um número (ou um número negativo para sair)
    printf("Digite um numero (ou um numero negativo para sair):\n");
    scanf("%d", &numero);

    // Loop que continua até que um número negativo seja inserido
    while (numero >= 0) {
        // Adiciona o número à soma e incrementa a quantidade de números inseridos
        soma += numero;
        quantidade++;
        // Solicita ao usuário que digite outro número (ou um número negativo para sair)
        printf("Digite outro numero (ou um numero negativo para sair):\n");
        scanf("%d", &numero);
    }

    // Calcula a média dos números inseridos
    media = soma / quantidade;
    // Imprime a média dos números inseridos
    printf("A media dos %d números inseridos é: %f\n", quantidade, media);

    return 0;
}

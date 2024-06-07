#include <stdio.h>

int main() {
    // Declaração da variável para armazenar o número inserido pelo usuário
    int num;

    // Solicita ao usuário que entre com um número para gerar a tabuada
    printf("Entre um número para gerar a sua tabuada: ");
    scanf("%d", &num);

    // Loop para gerar a tabuada do número inserido pelo usuário
    for (int i = 1; i <= 10; i++) {
        // Imprime a multiplicação do número pelo valor atual de 'i' e o resultado
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

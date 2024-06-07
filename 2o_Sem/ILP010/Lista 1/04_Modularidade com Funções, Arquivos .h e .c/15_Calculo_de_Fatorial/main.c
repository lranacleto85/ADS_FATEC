#include <stdio.h>
#include "fatorial.h"

int main() {
    int num;
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &num);

    unsigned long long resultado = calcularFatorial(num);
    printf("O fatorial de %d é: %llu\n", num, resultado);

    return 0;
}

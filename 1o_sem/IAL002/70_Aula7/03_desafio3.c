#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int fatorial(int numero) {
    if (numero == 0 || numero == 1) {
        return 1; 
    } else {
        return numero * fatorial(numero - 1);
    }
}

int main(void) {
    int numero;

    printf("Digite um nmero para calcular o fatorial: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O fatorial não está definido para números negativos.\n");
    } else {
        int resultado = fatorial(numero);
        printf("O fatorial de %d é: %d\n", numero, resultado);
    }

    return 0;
}

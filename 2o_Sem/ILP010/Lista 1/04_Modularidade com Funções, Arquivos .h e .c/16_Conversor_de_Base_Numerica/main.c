#include <stdio.h>
#include "conversor.h"

int main() {
    int opcao;
    printf("Escolha a operacao:\n");
    printf("1. Decimal para Binario\n");
    printf("2. Binario para Decimal\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        int decimal;
        printf("Digite um numero decimal: ");
        scanf("%d", &decimal);

        char *binario = decimalParaBinario(decimal);
        printf("O numero binario correspondente e: %s\n", binario);
        free(binario);
    } else if (opcao == 2) {
        char binario[100];
        printf("Digite um numero binario: ");
        scanf("%s", binario);

        int decimal = binarioParaDecimal(binario);
        printf("O numero decimal correspondente e: %d\n", decimal);
    } else {
        printf("Opcao invalida.\n");
    }

    return 0;
}

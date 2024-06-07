#include "conversor.h"
#include <stdlib.h>

char* decimalParaBinario(int decimal) {
    if (decimal == 0) {
        char *binario = (char*)malloc(2 * sizeof(char));
        binario[0] = '0';
        binario[1] = '\0';
        return binario;
    }

    int tamanho = 0;
    int temp = decimal;
    while (temp > 0) {
        temp /= 2;
        tamanho++;
    }

    char *binario = (char*)malloc((tamanho + 1) * sizeof(char));
    binario[tamanho] = '\0';

    for (int i = tamanho - 1; i >= 0; --i) {
        binario[i] = (decimal % 2 == 0) ? '0' : '1';
        decimal /= 2;
    }

    return binario;
}

int binarioParaDecimal(const char *binario) {
    int decimal = 0;
    int tamanho = 0;
    while (binario[tamanho] != '\0') {
        tamanho++;
    }

    int potencia = 1;
    for (int i = tamanho - 1; i >= 0; --i) {
        decimal += (binario[i] - '0') * potencia;
        potencia *= 2;
    }

    return decimal;
}

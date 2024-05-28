#include <stdio.h>
#include <string.h>
#include <math.h>

// Função para converter de decimal para binário
long long decimalParaBinario(int decimal) {
    long long binario = 0;
    int resto, i = 1;

    while (decimal != 0) {
        resto = decimal % 2;
        decimal /= 2;
        binario += resto * i;
        i *= 10;
    }

    return binario;
}

// Função para converter de binário para decimal
int binarioParaDecimal(long long binario) {
    int decimal = 0, i = 0, resto;

    while (binario != 0) {
        resto = binario % 10;
        binario /= 10;
        decimal += resto * pow(2, i);
        ++i;
    }

    return decimal;
}

// Função para converter de hexadecimal para decimal
int hexadecimalParaDecimal(char hexadecimal[]) {
    int decimal = 0, i = 0, valor, len;

    len = strlen(hexadecimal);
    for (i = 0; hexadecimal[i] != '\0'; ++i) {
        len--;
        if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9') {
            valor = hexadecimal[i] - '0';
        } else if (hexadecimal[i] >= 'a' && hexadecimal[i] <= 'f') {
            valor = hexadecimal[i] - 'a' + 10;
        } else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F') {
            valor = hexadecimal[i] - 'A' + 10;
        }
        decimal += valor * pow(16, len);
    }

    return decimal;
}

// Função para converter de decimal para octal
int decimalParaOctal(int decimal) {
    int octal = 0, i = 1;

    while (decimal != 0) {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }

    return octal;
}

// Função para converter de octal para decimal
int octalParaDecimal(int octal) {
    int decimal = 0, i = 0;

    while (octal != 0) {
        decimal += (octal % 10) * pow(8, i);
        octal /= 10;
        ++i;
    }

    return decimal;
}

int main() {
    int opcaoEntrada, opcaoSaida;
    char numero[100];
    int valorDecimal;

    printf("Escolha a opcao de entrada:\n");
    printf("1. Decimal\n");
    printf("2. Binario\n");
    printf("3. Hexadecimal\n");
    printf("4. Octal\n");
    scanf("%d", &opcaoEntrada);

    printf("Digite o numero na representacao escolhida: ");
    scanf("%s", numero);

    switch (opcaoEntrada) {
        case 1:
            valorDecimal = atoi(numero);
            break;
        case 2:
            valorDecimal = binarioParaDecimal(atoll(numero));
            break;
        case 3:
            valorDecimal = hexadecimalParaDecimal(numero);
            break;
        case 4:
            valorDecimal = octalParaDecimal(atoi(numero));
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    printf("Escolha a opcao de saida:\n");
    printf("1. Decimal\n");
    printf("2. Binario\n");
    printf("3. Hexadecimal\n");
    printf("4. Octal\n");
    scanf("%d", &opcaoSaida);

    switch (opcaoSaida) {
        case 1:
            printf("Decimal: %d\n", valorDecimal);
            break;
        case 2:
            printf("Binario: %lld\n", decimalParaBinario(valorDecimal));
            break;
        case 3:
            printf("Hexadecimal: %X\n", valorDecimal);
            break;
        case 4:
            printf("Octal: %o\n", valorDecimal);
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
//ATIVIDADE 3 - CÁLCULO
//DOCENTE: MÁRCIO SABINO
//DISCENTE: LEONARDO RAMOS ANACLETO 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Função para verificar se um número é inteiro
int is_integer(double num) {
    return num == (int)num;
}

// Função para calcular a derivada e o valor de f(x) = x^k
void derivada_x_potencia(double k, double x) {
    if (x == 0 && k - 1 < 0) {
        printf("Erro: Para x=0, k-1 nao pode ser negativo.\n");
    } else if (x < 0 && !is_integer(k - 1)) {
        printf("Erro: Para x<0, k-1 deve ser inteiro.\n");
    } else {
        double derivada = k * pow(x, k - 1);
        printf("f1(%.2f) = %.2f\n", x, derivada);
    }
}

// Função para calcular a derivada e o valor de f(x) = ln(x)
void derivada_ln(double x) {
    if (x <= 0) {
        printf("Erro: ln(x) indefinido para x<=0.\n");
    } else {
        double derivada = 1 / x;
        printf("f1(%.2f) = %.2f\n", x, derivada);
    }
}

// Função para calcular a derivada e o valor de f(x) = sin(x)
void derivada_sin(double x) {
    double derivada = cos(x);
    printf("f1(%.2f) = %.2f\n", x, derivada);
}

int main() {
    int opcao;
    double k, x;

    while (1) {
        // Exibe o menu
        printf("MENU:\n");
        printf("1. f(x) = x^k\n");
        printf("2. f(x) = ln(x)\n");
        printf("3. f(x) = sin(x)\n");
        printf("4. SAIR\n");
        printf("Escolha a funcao a ser derivada e avaliada em x: ");
        scanf("%d", &opcao);

        // Processa a opção escolhida
        switch (opcao) {
            case 1:
                // f(x) = x^k
                printf("Digite k: ");
                scanf("%lf", &k);
                printf("Digite x: ");
                scanf("%lf", &x);
                derivada_x_potencia(k, x);
                break;
            case 2:
                // f(x) = ln(x)
                printf("Digite x: ");
                scanf("%lf", &x);
                derivada_ln(x);
                break;
            case 3:
                // f(x) = sin(x)
                printf("Digite x: ");
                scanf("%lf", &x);
                derivada_sin(x);
                break;
            case 4:
                // SAIR
                printf("Saindo...\n");
                exit(0);
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    }

    return 0;
}

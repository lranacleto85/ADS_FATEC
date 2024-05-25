/*
Atividade 2 de Cálculo: Fazer um algoritmo que entre com os valores dos coeficientes a, b e c de uma função quadrática e imprima, 
na sequência, os seguintes resultados (ou mensagem de erro de inexistência do resultado):
Se gráfico possui parábola côncava para cima ou para baixo.
Zeros reais da função (no caso de não existir, apresentar uma mensagem de inexistência de zeros reais).
Valores do vértice da parábola.
Meu trabalho
DOCENTE: Márcio Sabino
DISCENTE: Leonardo Ramos Anacleto*/

#include <stdio.h>
#include <math.h>

// Calcula os zeros reais de uma função quadrática e imprime os resultados
void calcularZerosReais(float a, float b, float c) {
    float delta = b * b - 4 * a * c;

    if (delta > 0) {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Zeros reais da função: %.2f e %.2f\n", x1, x2);
    } else if (delta == 0) {
        float x = -b / (2 * a);
        printf("Zero real da função: %.2f\n", x);
    } else {
        printf("Não existem zeros reais para esta função.\n");
    }
}

// Calcula o vértice de uma parábola e imprime os resultados
void calcularVertice(float a, float b, float c) {
    float x_vertice = -b / (2 * a);
    float y_vertice = a * x_vertice * x_vertice + b * x_vertice + c;
    printf("Vértice da parábola: (%.2f, %.2f)\n", x_vertice, y_vertice);
}

int main() {
    // Coeficientes da função quadrática
    float a, b, c;

    // Solicitar ao usuário os coeficientes da função quadrática
    printf("Digite os coeficientes da função quadrática (ax^2 + bx + c): \n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    // Verificar se a é diferente de zero para garantir que é uma função quadrática
    if (a != 0) {
        // Determinar a concavidade da parábola
        if (a > 0) {
            printf("O gráfico possui parábola côncava para cima.\n");
        } else {
            printf("O gráfico possui parábola côncava para baixo.\n");
        }

        // Calcular os zeros reais da função
        calcularZerosReais(a, b, c);

        // Calcular o vértice da parábola
        calcularVertice(a, b, c);
    } else {
        printf("Erro: Os coeficientes inseridos não formam uma função quadrática (a = 0).\n");
    }

    return 0;
}
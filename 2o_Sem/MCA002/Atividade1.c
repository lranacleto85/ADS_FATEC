//***At1 - Cálculo - ADS - Computacional
// Atividade: Fazer um algoritmo que entre com um valor de ângulo x em graus (no corpo do código) e
// imprima os seguintes resultados (ou mensagem de erro de inexistência do resultado):
// seno do ângulo x
// cosseno do ângulo x
// tangente do ângulo x
// ALUNO: LEONARDO RAMOS ANACLETO

#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Definindo o valor do ângulo em graus
    double angulo_graus;
    printf("Digite o valor do angulo em graus: ");
    scanf("%lf", &angulo_graus);

    // Convertendo o ângulo para radianos
    double angulo_radianos = angulo_graus * M_PI / 180.0;

    // Calculando o seno, cosseno e tangente do ângulo
    double seno = sin(angulo_radianos);
    double cosseno = cos(angulo_radianos);
    double tangente = tan(angulo_radianos);

    // Verificando se a tangente não existe (caso em que o cosseno é zero)
    if (cosseno == 0) {
        printf("A tangente do angulo nao existe, pois o cosseno do angulo e zero.\n");
    } else {
        // Imprimindo os resultados
        printf("Seno do angulo: %lf\n", seno);
        printf("Cosseno do angulo: %lf\n", cosseno);
        printf("Tangente do angulo: %lf\n", tangente);
    }

    return 0;
}

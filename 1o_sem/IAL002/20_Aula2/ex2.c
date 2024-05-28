#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    float altura;
    float peso;
    float nota;

    // Solicitação de dados
    printf("Digite a altura do candidato (em centimetros): ");
    scanf("%f", &altura);
    printf("Digite o peso do candidato (em Kg): ");
    scanf("%f", &peso);
    printf("Digite a nota do candidato: ");
    scanf("%f", &nota);

    // Verificação se o candidato atende aos requisitos
    if (nota == 10.0) {
        printf("Candidato aprovado automaticamente (nota 10).\n");
    } else if (altura >= 170 && peso <= 80 && nota >= 9.0) {
        printf("Candidato aprovado.\n");
    } else {
        printf("Candidato reprovado.\n");
    }

    return 0;
}







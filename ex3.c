#include <stdio.h>

int main() {
    float peso, altura, relacao;

    // Solicitação de peso [kg]
    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    // solicitação de altura [metros]
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    // Calcular IMC [peso/altura²]
    relacao = peso / (altura * altura);

    // Determinação do IMC
    if (relacao < 20) {
        printf("A pessoa está abaixo do peso.\n");
    } else if (relacao >= 20 && relacao < 25) {
        printf("A pessoa está com o peso ideal.\n");
    } else {
        printf("A pessoa está acima do peso.\n");
    }

    return 0;
}
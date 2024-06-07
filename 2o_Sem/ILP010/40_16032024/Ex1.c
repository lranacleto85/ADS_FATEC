#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

// Função para cálculo de IMC
float calculoIMC(float peso, float altura)
{
    return peso / (altura * altura);
}

int main()
{
    float peso, altura, imc;
    // Entrada de dados
    printf("Insira seu peso em quilos (kg): ");
    scanf("%f", &peso);

    printf("Informe sua altura em metros(m): ");
    scanf("%f", &altura);
    // Processamento
    imc = calculoIMC(peso, altura);
    // Saída de dados
    printf("Seu IMC é: %.2f\n", imc);
    if (imc < 18.5)
    {
        printf("Você está abaixo do peso\n");
    }
    else if (imc >= 18.5 && imc < 25)
    {
        printf("Você está com o peso normal\n");
    }
    else if (imc >= 25 && imc < 30)
    {
        printf("Você está com sobrepeso\n");
    }
    else if (imc >= 30 && imc < 35)
    {
        printf("Você está com obesidade grau 1\n");
    }
    else if (imc >= 35 && imc < 40)
    {
        printf("Você está com obesidade grau 2\n");
    }
    else
    {
        printf("Você está com obesidade grau 3\n");
    }
    return 0;
}
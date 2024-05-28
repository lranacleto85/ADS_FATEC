#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int qtd;
    printf("Qual tamanho do vetor: ");
    scanf("%d", &qtd);

    int vet[qtd], i;
    int numero;
    int media = 0; // Initialize the 'media' variable
    printf("Informe um número inteiro: ");
    scanf("%d", &numero);

    for (i = 0; i < qtd; i++) // Removed the unnecessary semicolon
    {
        vet[i] = numero; // Removed the subtraction
        printf("%d\n", vet[i]);
        numero -= 1;
    }

    for (i = 0; i < qtd; i++) // Corrected the loop syntax
    {
        media += vet[i];
    }

    printf("A média é: %.2f\n", (float)media / qtd); // Calculate and print the average

    return EXIT_SUCCESS;
}

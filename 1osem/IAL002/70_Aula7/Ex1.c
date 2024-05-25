#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
    struct registro
    {
        char nome[10];
        int idade;
        float salario;
    };
    struct registro cadastro[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Digite o nome: ");
        scanf("%s", cadastro[i].nome);
        printf("Digite a idade: ");
        scanf("%d", &cadastro[i].idade);
        printf("Digite o salario: ");
        scanf("%f", &cadastro[i].salario);
    }

    printf("\n\nCadastros:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\nNome: %s", cadastro[i].nome);
        printf("\nIdade: %d", cadastro[i].idade);
        printf("\nSalario: %.2f\n", cadastro[i].salario);
    }

    return 0;
}
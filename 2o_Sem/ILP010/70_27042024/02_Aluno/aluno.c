#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inicializa()
{
    int i;
    for (i = 0; i < MAX; i++)
    {
        v[i] = NULL;
    }
}

void ler_dados(int i)
{
    if (v[i] == NULL)
    {
        v[i] = (p_aluno)malloc(sizeof(aluno));
        printf("Digite o nome do aluno: ");
        fgets(v[i]->nome, sizeof(v[i]->nome), stdin);

        // Remove o caractere de nova linha (\n)
        if (v[i]->nome[strlen(v[i]->nome) - 1] == '\n')
            v[i]->nome[strlen(v[i]->nome) - 1] = '\0';

        // Ler e verificar a matrícula
        printf("Digite a matricula do aluno: ");
        if (scanf("%d", &v[i]->matricula) != 1) {
            printf("Erro ao ler a matrícula. Certifique-se de digitar um número inteiro.\n");
            free(v[i]);
            v[i] = NULL;
            return;
        }
        // Limpa o buffer de entrada
        while (getchar() != '\n')
            continue;

        printf("Digite o endereco do aluno: ");
        fgets(v[i]->endereco, sizeof(v[i]->endereco), stdin);
        // Remove o caractere de nova linha (\n)
        if (v[i]->endereco[strlen(v[i]->endereco) - 1] == '\n')
            v[i]->endereco[strlen(v[i]->endereco) - 1] = '\0';

        printf("Digite o telefone do aluno: ");
        fgets(v[i]->telefone, sizeof(v[i]->telefone), stdin);
        // Remove o caractere de nova linha (\n)
        if (v[i]->telefone[strlen(v[i]->telefone) - 1] == '\n')
            v[i]->telefone[strlen(v[i]->telefone) - 1] = '\0';

        // Ler e verificar a nota
        printf("Digite a nota do aluno: ");
        if (scanf("%lf", &v[i]->nota) != 1) {
            printf("Erro ao ler a nota. Certifique-se de digitar um número válido.\n");
            free(v[i]);
            v[i] = NULL;
            return;
        }
        // Limpa o buffer de entrada
        while (getchar() != '\n')
            continue;
    }
}


void imprimir_unico(int i)
{
    if (v[i] != NULL)
    {
        printf("Nome: %s\n", v[i]->nome);
        printf("Matricula: %8d\n", v[i]->matricula);
        printf("Endereco: %s\n", v[i]->endereco);
        printf("Telefone: %s\n", v[i]->telefone);
        printf("Nota: %.2lf\n", v[i]->nota);
        printf("\n");
    }
}

void imprimir_tudo()
{
    int i;
    for (i = 0; i < MAX; i++)
    {
        imprimir_unico(i);
    }
}
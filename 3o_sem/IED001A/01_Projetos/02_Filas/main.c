// Projeto realizado pelos Dicentes: 
// Leonardo Ramos Anacleto
//Fernando Gimenes
//Disciplina: IED001A - Estrutura de Dados
// Docente: MARCOS ROBERTO NAVA

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Fila.h"

// Constantes
enum
{
    OP_NAO_SELECIONADA = 0,
    OP_RETIRAR_SENHA,
    OP_ATENDER_FILA,
    OP_SAIR
};

// Protótipos
int menu();

int main(void)
{
    int opcao = OP_NAO_SELECIONADA;
    int senha = 0;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    while (opcao != OP_SAIR)
    {
        opcao = menu();

        switch (opcao)
        {
        case OP_RETIRAR_SENHA:
            // Gera uma senha aleatória entre 1000 e 9999
            senha = rand() % 9000 + 1000;
            // Adiciona a senha na fila
            if (!adicionar(senha))
            {
                printf("Fila cheia!\n");
            }
            else
            {
                printf("Sua senha é: %d\n", senha);
            }
            break;
        case OP_ATENDER_FILA:
            if (retirar(&senha))
            {
                printf("Senha %d atendida\n", senha);
            }
            else
            {
                printf("Fila vazia\n");
            }
            break;
        case OP_SAIR:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida!\n");
        }
    }

    return 0;
}

int menu()
{
    int op = OP_NAO_SELECIONADA;

    printf("\nMenu\n");
    printf("%d - Retirar senha\n", OP_RETIRAR_SENHA);
    printf("%d - Atender fila\n", OP_ATENDER_FILA);
    printf("%d - Sair\n", OP_SAIR);
    printf("Digite sua opcao: ");
    scanf("%d", &op);

    return op;
}

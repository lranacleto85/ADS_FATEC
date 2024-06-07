#include <stdio.h>
#include "aluno.h"

#define MAX 100 // Defina o tamanho máximo do vetor de alunos

p_aluno v[MAX]; // Declaração do vetor de alunos

int main()
{
    int i = 0;     // posição a ser cadastrada
    int opcao = 0; // opção do menu
    
    do
    {
        int p = 0; // variável de procura única
        
        printf("Menu Principal \n");
        printf("====================================\n");
        printf("1 - Cadastrar Novo Aluno \n");
        printf("2 - Imprimir dados de um unico aluno \n");
        printf("3 - Imprimir dados de todos os alunos \n");
        printf("9 - Sair \n");
        printf("====================================\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);

        // Limpa o buffer de entrada
        while (getchar() != '\n')
            continue;
        
        switch (opcao)
        {
            case 1: // cadastro de aluno
                ler_dados(i);
                printf("Tecle para continuar \n");
                i++; // passa para próxima posição
                getchar(); // Limpa o buffer do teclado
                break;
            case 2: // imprimir dados de um aluno
                printf("Digite a matricula do aluno: ");
                scanf("%d", &p);
                imprimir_unico(p);
                printf("Tecle para continuar \n");
                getchar(); // Limpa o buffer do teclado
                break;
            case 3: // imprimir todos os alunos
                imprimir_tudo();
                printf("Tecle para continuar \n");
                getchar(); // Limpa o buffer do teclado
                break;
            case 9: // sai do programa
                printf("Saindo do programa...\n");
                break;
            default: // opção inválida
                printf("Opção inválida. Digite novamente.\n");
        }
        
    } while (opcao != 9);
    
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}

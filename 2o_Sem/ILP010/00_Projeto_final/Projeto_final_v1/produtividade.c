#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "produtividade.h"

Tarefa tarefas[MAX_TAREFAS];
int num_tarefas = 0;
time_t inicio_tempo;
int tarefa_atual = -1;

void inicializarSistema()
{
    num_tarefas = 0;
}

void salvarDados()
{
    
}

void adicionarTarefa()
{
    if (num_tarefas >= MAX_TAREFAS)
    {
        printf("Número máximo de tarefas atingido!\n");
        return;
    }

    Tarefa nova_tarefa;
    printf("Descrição: ");
    fgets(nova_tarefa.descricao, sizeof(nova_tarefa.descricao), stdin);
    nova_tarefa.descricao[strcspn(nova_tarefa.descricao, "\n")] = 0; // Remover nova linha

    printf("Prioridade (1-5): ");
    scanf("%d", &nova_tarefa.prioridade);
    getchar(); // Limpar o buffer de entrada

    printf("Categoria: ");
    fgets(nova_tarefa.categoria, sizeof(nova_tarefa.categoria), stdin);
    nova_tarefa.categoria[strcspn(nova_tarefa.categoria, "\n")] = 0; // Remover nova linha

    nova_tarefa.tempo_gasto = 0;

    tarefas[num_tarefas++] = nova_tarefa;
    printf("Tarefa adicionada com sucesso!\n");
}

void editarTarefa()
{
    listarTarefas();
    if (num_tarefas == 0)
        return;

    int indice;
    printf("Número da tarefa a editar: ");
    scanf("%d", &indice);
    getchar(); // Limpar o buffer de entrada

    if (indice < 1 || indice > num_tarefas)
    {
        printf("Tarefa inválida!\n");
        return;
    }

    Tarefa *tarefa = &tarefas[indice - 1];
    printf("Nova descrição (%s): ", tarefa->descricao);
    fgets(tarefa->descricao, sizeof(tarefa->descricao), stdin);
    tarefa->descricao[strcspn(tarefa->descricao, "\n")] = 0; // Remover nova linha

    printf("Nova prioridade (%d): ", tarefa->prioridade);
    scanf("%d", &tarefa->prioridade);
    getchar(); // Limpar o buffer de entrada

    printf("Nova categoria (%s): ", tarefa->categoria);
    fgets(tarefa->categoria, sizeof(tarefa->categoria), stdin);
    tarefa->categoria[strcspn(tarefa->categoria, "\n")] = 0; // Remover nova linha

    printf("Tarefa editada com sucesso!\n");
}

void excluirTarefa()
{
    listarTarefas();
    if (num_tarefas == 0)
        return;

    int indice;
    printf("Número da tarefa a excluir: ");
    scanf("%d", &indice);
    getchar(); // Limpar o buffer de entrada

    if (indice < 1 || indice > num_tarefas)
    {
        printf("Tarefa inválida!\n");
        return;
    }

    for (int i = indice - 1; i < num_tarefas - 1; ++i)
    {
        tarefas[i] = tarefas[i + 1];
    }
    num_tarefas--;
    printf("Tarefa excluída com sucesso!\n");
}

void listarTarefas()
{
    if (num_tarefas == 0)
    {
        printf("Nenhuma tarefa registrada.\n");
        return;
    }

    printf("\n==== Lista de Tarefas ====\n");
    for (int i = 0; i < num_tarefas; ++i)
    {
        printf("%d. %s (Prioridade: %d, Categoria: %s, Tempo gasto: %d min)\n",
            i + 1, tarefas[i].descricao, tarefas[i].prioridade,
            tarefas[i].categoria, tarefas[i].tempo_gasto);
    }
}

void iniciarTempo()
{
    listarTarefas();
    if (num_tarefas == 0)
        return;

    printf("Número da tarefa para iniciar o tempo: ");
    scanf("%d", &tarefa_atual);
    getchar(); // Limpar o buffer de entrada

    if (tarefa_atual < 1 || tarefa_atual > num_tarefas)
    {
        printf("Tarefa inválida!\n");
        tarefa_atual = -1;
        return;
    }

    tarefa_atual--; // Ajustar para índice zero-based
    time(&inicio_tempo);
    printf("Tempo iniciado para a tarefa: %s\n", tarefas[tarefa_atual].descricao);
}

void pararTempo()
{
    if (tarefa_atual == -1)
    {
        printf("Nenhuma tarefa com tempo iniciado.\n");
        return;
    }

    time_t fim_tempo;
    time(&fim_tempo);

    double tempo_gasto = difftime(fim_tempo, inicio_tempo) / 60.0; // Tempo em minutos
    tarefas[tarefa_atual].tempo_gasto += (int)tempo_gasto;

    printf("Tempo parado. %d minutos adicionados à tarefa: %s\n",
        (int)tempo_gasto, tarefas[tarefa_atual].descricao);

    tarefa_atual = -1; // Resetar tarefa atual
}

void exibirEstatisticas()
{
    if (num_tarefas == 0)
    {
        printf("Nenhuma tarefa registrada para análise.\n");
        return;
    }

    int tempo_total = 0;
    for (int i = 0; i < num_tarefas; ++i)
    {
        tempo_total += tarefas[i].tempo_gasto;
    }

    printf("\n==== Estatísticas de Produtividade ====\n");
    printf("Total de tarefas: %d\n", num_tarefas);
    printf("Tempo total gasto em tarefas: %d minutos\n", tempo_total);

    for (int i = 0; i < num_tarefas; ++i)
    {
        printf("%d. %s (Categoria: %s) - %d minutos\n",
            i + 1, tarefas[i].descricao, tarefas[i].categoria, tarefas[i].tempo_gasto);
    }
}

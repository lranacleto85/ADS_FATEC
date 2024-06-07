#ifndef PRODUTIVIDADE_H
#define PRODUTIVIDADE_H

#define MAX_TAREFAS 100

typedef struct
{
    char nome[256];
    char descricao[1024];
} Tarefa;

extern Tarefa tarefas[MAX_TAREFAS];
extern int numero_tarefas;

void carregarDados();
void salvarDados();

#endif // PRODUTIVIDADE_H

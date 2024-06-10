#ifndef PRODUTIVIDADE_H
#define PRODUTIVIDADE_H

// Define o número máximo de tarefas que podem ser armazenadas
#define MAX_TAREFAS 100

// Estrutura que representa uma tarefa
typedef struct
{
    char descricao[100];     // Descrição da tarefa
    int prioridade;          // Prioridade da tarefa (1-5)
    char categoria[50];      // Categoria da tarefa (ex: Trabalho, Pessoal)
    int tempo_gasto;         // Tempo gasto na tarefa em minutos
} Tarefa;

// Declaração das variáveis globais
extern Tarefa tarefas[MAX_TAREFAS];  // Array de tarefas
extern int num_tarefas;              // Número atual de tarefas

// Funções do sistema

/**
 * Inicializa o sistema de gerenciamento de tarefas.
 * Deve ser chamada antes de qualquer outra operação.
 */
void inicializarSistema();

/**
 * Salva os dados das tarefas no armazenamento persistente.
 * Deve ser chamada após adicionar, editar ou excluir uma tarefa.
 */
void salvarDados();

/**
 * Adiciona uma nova tarefa ao sistema.
 * Solicita ao usuário os detalhes da tarefa (descrição, prioridade, categoria).
 */
void adicionarTarefa();

/**
 * Edita uma tarefa existente no sistema.
 * Solicita ao usuário o índice da tarefa a ser editada e os novos detalhes.
 */
void editarTarefa();

/**
 * Exclui uma tarefa do sistema.
 * Solicita ao usuário o índice da tarefa a ser excluída.
 */
void excluirTarefa();

/**
 * Lista todas as tarefas atualmente armazenadas no sistema.
 * Exibe os detalhes de cada tarefa (descrição, prioridade, categoria, tempo gasto).
 */
void listarTarefas();

/**
 * Inicia a contagem de tempo para uma tarefa específica.
 * Solicita ao usuário o índice da tarefa e começa a cronometrar o tempo gasto.
 */
void iniciarTempo();

/**
 * Para a contagem de tempo para a tarefa que está sendo cronometrada.
 * Atualiza o tempo gasto na tarefa correspondente.
 */
void pararTempo();

/**
 * Exibe estatísticas sobre as tarefas armazenadas.
 * Pode incluir total de tarefas, tempo total gasto, tarefas por categoria, etc.
 */
void exibirEstatisticas();

#endif

#include <stdio.h>
#include "Fila.h"

// Variáveis globais que representam a fila e seus índices de controle
int fila[TAMANHO]; // Array que armazena os elementos da fila (senhas)
int inicio = 0;    // Índice que aponta para o início da fila (primeiro elemento)
int fim = 0;       // Índice que aponta para o fim da fila (próxima posição livre)

// Função para adicionar uma nova senha à fila
// Parâmetros:
// - valor: o número (senha) a ser inserido na fila
// Retorno:
// - true: se a senha foi adicionada com sucesso
// - false: se a fila está cheia
bool adicionar(int valor)
{
    // Verifica se a fila está cheia, comparando o índice 'fim' com o tamanho máximo
    if (fim == TAMANHO)
    {
        return false; // Retorna false se não há espaço para adicionar mais senhas
    }

    // Adiciona o valor (senha) na posição indicada por 'fim'
    fila[fim] = valor;

    // Incrementa o índice 'fim' para a próxima posição livre
    fim++;

    // Retorna true indicando que a senha foi adicionada com sucesso
    return true;
}

// Função para retirar a próxima senha da fila
// Parâmetros:
// - valor: ponteiro para armazenar o valor da senha retirada
// Retorno:
// - true: se uma senha foi retirada com sucesso
// - false: se a fila está vazia
bool retirar(int *valor)
{
    // Verifica se a fila está vazia, comparando os índices 'inicio' e 'fim'
    if (inicio == fim)
    {
        return false; // Retorna false se não há senhas na fila
    }

    // Armazena a senha na posição 'inicio' da fila no endereço apontado por 'valor'
    *valor = fila[inicio];

    // Incrementa o índice 'inicio' para remover o elemento da fila
    inicio++;

    // Se todos os elementos forem removidos, reseta os índices para reutilizar o array
    if (inicio == fim)
    {
        inicio = 0;
        fim = 0;
    }

    // Retorna true indicando que uma senha foi retirada com sucesso
    return true;
}

// Função para imprimir o estado atual da fila de senhas
void imprimir()
{
    // Verifica se a fila está vazia
    if (inicio == fim)
    {
        printf("Fila Vazia\n"); // Imprime mensagem informando que a fila está vazia
    }
    else
    {
        printf("Fila de senhas: | ");

        // Itera sobre os elementos da fila, começando de 'inicio' até 'fim'
        for (int i = inicio; i < fim; i++)
        {
            printf("%d | ", fila[i]); // Imprime cada senha presente na fila
        }
        printf("\n");
    }
}

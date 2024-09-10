#ifndef FILA_H
#define FILA_H
#include <stdbool.h>

// Constantes
enum
{
    TAMANHO = 5 // Define o tamanho máximo da fila
};

// Variáveis globais
extern int fila[TAMANHO]; // Array que armazena os elementos da fila (senhas)
extern int inicio;        // Índice que aponta para o início da fila
extern int fim;           // Índice que aponta para o fim da fila

// Protótipos das funções
bool adicionar(int valor); // Adiciona uma nova senha à fila
bool retirar(int *valor);  // Retira a próxima senha da fila
void imprimir();           // Imprime o estado atual da fila

#endif // FILA_H

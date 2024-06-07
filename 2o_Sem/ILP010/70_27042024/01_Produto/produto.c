#include "produto.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inicializar(PtrProduto vetor[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        vetor[i] = NULL;
    }
}

void cadastrar(PtrProduto vetor[], int tamanho, int pos) {
    if (pos < 0 || pos >= tamanho) {
        printf("Posição inválida para cadastro.\n");
        return;
    }
    if (vetor[pos] != NULL) {
        printf("Posição já está ocupada.\n");
        return;
    }
    vetor[pos] = (PtrProduto)malloc(sizeof(Produto));
    if (vetor[pos] == NULL) {
        printf("Erro de alocação de memória.\n");
        return;
    }

    printf("Digite o código do produto: \n");
    scanf("%d", &vetor[pos]->codigo);

    printf("Digite a descrição do produto (até %d caracteres): \n", MAX_DESCRICAO);
    getchar(); // Limpar o buffer do teclado
    fgets(vetor[pos]->descricao, MAX_DESCRICAO, stdin);
    vetor[pos]->descricao[strcspn(vetor[pos]->descricao, "\n")] = '\0'; // Remover o '\n' inserido pelo fgets

    printf("Digite o preço do produto: \n");
    scanf("%lf", &vetor[pos]->preco);
    vetor[pos]->qtd_estoque = 0;
    printf("Produto cadastrado com sucesso.\n");
}

void listar(PtrProduto vetor[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        if (vetor[i] != NULL) {
            printf("Dados cadastrados:\n");
            printf("Cod. Produto: %d\n", vetor[i]->codigo);
            printf("Desc. Produto: %s\n", vetor[i]->descricao);
            printf("Preço do Produto: %.2lf\n", vetor[i]->preco);
            printf("Quantidade em estoque: %d\n", vetor[i]->qtd_estoque);
            printf("-----------------------\n");
        }
    }
}

void listarUnico(PtrProduto vetor[], int tamanho, int codigo) {
    for (int i = 0; i < tamanho; ++i) {
        if (vetor[i] != NULL && vetor[i]->codigo == codigo) {
            printf("Dados cadastrados:\n");
            printf("Cod. Produto: %d\n", vetor[i]->codigo);
            printf("Desc. Produto: %s\n", vetor[i]->descricao);
            printf("Preço do Produto: %.2lf\n", vetor[i]->preco);
            printf("Quantidade em estoque: %d\n", vetor[i]->qtd_estoque);
            printf("-----------------------\n");
            return;
        }
    }
    printf("Produto não encontrado.\n");
}

void comprar(PtrProduto vetor[], int tamanho, int codigo, int qtd) {
    for (int i = 0; i < tamanho; ++i) {
        if (vetor[i] != NULL && vetor[i]->codigo == codigo) {
            vetor[i]->qtd_estoque += qtd;
            printf("Compra realizada com sucesso.\n");
            return;
        }
    }
    printf("Produto não encontrado.\n");
}

void vender(PtrProduto vetor[], int tamanho, int codigo, int qtd) {
    for (int i = 0; i < tamanho; ++i) {
        if (vetor[i] != NULL && vetor[i]->codigo == codigo) {
            if (vetor[i]->qtd_estoque >= qtd) {
                vetor[i]->qtd_estoque -= qtd;
                printf("Venda realizada com sucesso.\n");
            } else {
                printf("Quantidade insuficiente em estoque.\n");
            }
            return;
        }
    }
    printf("Produto não encontrado.\n");
}

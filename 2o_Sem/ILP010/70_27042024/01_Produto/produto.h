#ifndef PRODUTO_H
#define PRODUTO_H

#define MAX_DESCRICAO 50
#define MAX_PRODUTOS 100

typedef struct Produto {
    int codigo;
    char descricao[MAX_DESCRICAO + 1];
    double preco;
    int qtd_estoque;
} Produto;

typedef Produto *PtrProduto;

void inicializar(PtrProduto vetor[], int tamanho);

void cadastrar(PtrProduto vetor[], int tamanho, int pos);

void listarUnico(PtrProduto vetor[], int tamanho, int codigo);

void listar(PtrProduto vetor[], int tamanho);

void comprar(PtrProduto vetor[], int tamanho, int codigo, int qtd);

void vender(PtrProduto vetor[], int tamanho, int codigo, int qtd);

#endif

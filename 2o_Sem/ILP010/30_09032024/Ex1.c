#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

int main(void)                                                                                             
{
    char nome[51]={'\0'};
    fflush (stdin); // limpar enter
    printf ("Digite um nome: \n"); 
    fgets (nome, 51, stdin);
    nome[strlen(nome) -1] = '\0'; // pegar o enter na string
    printf ("Nome: %s \n", nome);
    printf("oi");
    return 0;
}

//Soma de Elementos:
//Escreva um programa que leia um vetor de 10 números inteiros,  calcule e imprima a soma de todos os seus elementos.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

int main(void)                                                                                             
{
    int i, vetor[10];
    int soma = 0;
    
    printf("Digite 10 números inteiros:\n");
    fflush (stdin); 
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    printf("A soma de todos os elementos do vetor eh: %d\n", soma);

    return 0;
}
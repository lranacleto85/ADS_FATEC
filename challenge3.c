#include <stdio.h>

int main(void)
{
int idades[10];
    int soma = 0;
    float media;
    printf("Digite 10 idades:\n");// Solicita as 10 idades e calcula a soma das idades
        for (int i = 0; i < 10; i++) 
    {
        printf("Idade %d: ", i + 1);
        scanf("%d", &idades[i]);
        soma += idades[i];
    }
        media = (float)soma / 10;// Calculo da média
    printf("A média das idades é: %.2f\n", media);// Exibição da média
    return 0;
}
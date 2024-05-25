#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void tabuada(int x)
{
    printf("Tabuada do %d:\n", x);
    for (int i = 1; i <= 10; ++i)
    {
        printf("%d x %d = %d\n", x, i, x * i);
    }
}

int main(void)
{
    int numero;

    printf("Digite um numero para gerar a tabuada: ");
    scanf("%d", &numero);

    tabuada(numero);

    return 0;
}
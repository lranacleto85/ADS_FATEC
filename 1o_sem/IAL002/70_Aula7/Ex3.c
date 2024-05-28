#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int quadrado(int i)
{
    return i * i;
}

int main(void)
{
    int a;
    printf("\nInforme um valor inteiro: ");
    scanf("%d", &a);
    printf("\nRESULTADO: %d, Quadrado: %d", a, quadrado(a));
    return EXIT_SUCCESS;
}

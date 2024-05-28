#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void quadrado(int x)
{
    int result;
    result = (x * x);
    printf("O quadrado de %d é %d\n", x, result);
}

int main(void)
{
    int a;
    printf("\nInforme um valor inteiro: ");
    scanf("%d", &a);
    quadrado(a);
    return EXIT_SUCCESS;
}

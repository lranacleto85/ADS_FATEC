#include <stdio.h>

int main(void)
{
    int numero;
    printf("Digite um número para ver sua tabuada: ");
    scanf("%d", &numero);
    printf("Tabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    return 0;
}
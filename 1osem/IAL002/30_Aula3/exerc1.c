#include <stdio.h>

int main(void)
    {
        int numero, i;
        printf("\n Informe um n?mero: ");
        scanf("%i", &numero);
        printf("\n N??mero escolhido %d", numero);
        numero = numero - 1;
        for (i = 0; i <10; i++)
        {
            numero = numero -1;
            printf("\n N?mero atual: %d", numero);
        }
    }

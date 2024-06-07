#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int x;
    printf("valor de x: %d \n", x);
    printf("Entre com um valor: \n");
    scanf("%d", &x);
    printf("valor de x: %d \n", x);
    printf("Endereço de x: %p \n", &x);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int x, y;
    printf("Digite dois valores \n");
    scanf("%d%d", &x, &y);
    printf("Endereço de x: %d \n", &x);
    printf("Endereço de y: %d \n", &y);
    printf("Valor de x: %d \n", x);
    printf("Valor de y: %d \n", y);
    return 0;
}

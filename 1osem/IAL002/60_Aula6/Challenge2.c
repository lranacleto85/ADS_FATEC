#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int resultado[11]; 
    int somatabuada = 0; 
    int tabuada;
    int i;

    printf("Digite a tabuada desejada: ");
    scanf("%d", &tabuada);

    for (i = 1; i <= 10; i++) {
        resultado[i] = tabuada * i;
        somatabuada = somatabuada + resultado[i];
        printf("%d x %d = %d\n", tabuada, i, resultado[i]);
    }

    printf("A soma da tabuada: %d\n", somatabuada);

    return 0;
}

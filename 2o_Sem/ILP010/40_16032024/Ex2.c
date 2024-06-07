#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

void trocar (int *p_a, int *p_b);
int main() {
    int a = 10;
    int b = 15;
    printf ("Antes a: %d e b: %d \n", a, b);
    trocar(&a, &b);
    printf ("Depois a: %d e b: %d \n", a, b);
    return 0;
}

void trocar (int *p_a, int *p_b){
    int aux = *p_a;
    *p_a = *p_b;
    *p_b = aux;
}

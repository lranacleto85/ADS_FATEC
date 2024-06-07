#include <stdio.h>

int main()
{
    int a, b, c;
    printf ("digite o valor de a: \n");
    scanf ("%d", &a);
        printf ("Endereco de a: %d \n", &a);
        printf ("Endereco de b: %d \n", &b);
        printf ("Valor de a: %d \n", a);
    c = a++ + 10;
    printf("Valor de c: %d \n", c);
    return 0;
}

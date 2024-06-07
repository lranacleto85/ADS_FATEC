#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void)
{
    char letra1, letra2;
    printf ("Digite a primeira letra: \n");
    scanf ("%c", &letra1);
    fflush (stdin);
    printf ("Digite a segunda letra: \n");
    letra2 = getchar();

    printf ("Letra 1 = %c \nLetra 2 = %c\n", letra1, letra2);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

int main(void)                                                                                             
{
    char palavra[51] = "Brasil";
    char palavra2[51] = "?Um país da América do Sul";
    char copia[101];
    strcpy (copia, palavra); //copia o conteúdo
    printf ("Copia: %s\n", copia);
    strcat (copia, palavra2); //junta o conteúdo
    printf ("Copia: %s\n", copia);
    
return 0;
}
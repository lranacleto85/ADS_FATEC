#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

int main(void)                                                                                             
{
    char nome1[51];
    char nome2[51];
    fflush (stdin);
    printf ("Digite nome 1: ");
    fgets(nome1, sizeof(nome1), stdin);

    fflush (stdin);
    printf ("Digite nome 2: ");
    fgets(nome2, sizeof(nome2), stdin);
    
    if (strcmp( nome1, nome2)==0){ //comparação de strings
        printf("Nomes iguais!");
        }else{
            if (strcmp (nome1, nome2) <0){
                printf("%s\n", nome1);
                printf("%s\n", nome2);
                }else{
                    printf("%s\n", nome2);
                    printf("%s\n", nome1);
                }
            }
return 0;
        }

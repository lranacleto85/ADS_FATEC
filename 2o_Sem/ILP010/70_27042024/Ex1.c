#include <stdio.h>
long contarLetrar(char * p_string);
void imprimirReverso(char * p_string);
int main() {
    char s[100];
    char * ptr = s;
    printf("Digite uma palavra: \n");
    scanf("%s", s);
    printf("Total de letras: %ld \n", contarLetrar(ptr));
    imprimirReverso(s);
    return 0;
}

long contarLetrar(char * p_string){
    char * pos_inicial = p_string;
    while(*p_string != '\0'){
        p_string++;
    }
    return p_string - pos_inicial;
}
void imprimirReverso(char * p_string){
    char * pos_inicial = p_string;
    while(*p_string != '\0') p_string++;
    p_string--;
    while(p_string >= pos_inicial) putchar(*p_string--);
}
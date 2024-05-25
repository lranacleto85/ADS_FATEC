#include <stdio.h>
int main(void)
{
  int numero;
  char nome[10];
  printf("informe um numero:");
  scanf("%d", &numero);
  printf("qual seu nome?");
  scanf("%s", &nome);
  printf("\nseu nome é %s e seu numero é %d", nome, numero);
  return 0;
}
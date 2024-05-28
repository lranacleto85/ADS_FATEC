#include <stdio.h>

int main(void)
{
  int vlrunit, qtde;
  float vlrtotal;
  char nome[10], nomeprod[10];
  printf("\n Informe seu nome: ");
  scanf("%s", &nome);
  printf("\n Informe o produto adquirido: ");
  scanf("%s", &nomeprod);
  printf("\n Informe a quantidade comprada: ");
  scanf("%i", &qtde);
  printf("\n Informe o valor unitário do produto adquirido: R$ ");
  scanf("%i", &vlrunit);
  printf("\n\n");
  vlrtotal = qtde * vlrunit;
  if (vlrtotal > 300)
  {
    vlrtotal = qtde * vlrunit;
    printf("\n\n");
    printf("O valor total da sua compra foi de  R$ %.2f", vlrtotal);
    printf("\n\n");
    printf("Foi ótimo ter você aqui, volte sempre!!");
  }
  else
  {
    vlrtotal = qtde * vlrunit;

    printf("O valor total da sua compra foi de R$ %.2f", vlrtotal);
    printf("\n\n");
    printf("\nVocê poderia aproveitar melhor nossos produtos!");
  }
}
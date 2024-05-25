#include <stdio.h>

int main(void) 
{
  int idade, anonasc;
  float salario, salarioliq;
  char nome[10];
  printf ("\n Informe o nome do Colaborador: ");
  scanf ("%s", &nome);
  printf ("\n Informe a idade: ");
  scanf ("%d", &idade);
  printf ("\n Informe o salário: ");
  scanf ("%f", &salario);
  anonasc=2023-idade;
  if (salario > 1000)
  {
    salarioliq=salario*0.92;
  }else{
    salarioliq=salario;
  }
    float desconto;
  desconto=salario-salarioliq;
  printf ("%s Sua idade é %d, nasceu no ano de %d ",nome,idade,anonasc);
  printf ("\n\n");
  printf ("Seu salário bruto é R$ %.2f anos; com desconto de R$ %.2f; resultando em um salário de R$ %.2f ",salario,desconto,salarioliq);
    
}
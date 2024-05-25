#include <stdio.h>
#include <math.h>
#include<stdbool.h>

int logica(int opcao, int p, int q) 
{
    int resultado;

    switch (opcao) 
    {
        case 1:
            resultado = p && q;
            break;
        case 2:
            resultado = p || q;
            break;
        case 3:
            resultado = !((p && q) || (!p && !q));
            break;
        case 4:
            resultado = !p || q;
            break;
        case 5:
            resultado = (p && q) || (!p && !q);
            break;
        default:
            resultado = -1;
    }
    return resultado;
}
int main()
{
    int opcao, p, q, soma;
    float nota;
    p = 1;
    q = 0;
    printf("***********************************************************\n");
    printf("Considere 1 para VERDADEIRO e 0 para FALSO\n");
    printf("TESTE DIRETO para p = %d e q = %d em cada uma das opcoes\n",p,q);
    printf("***********************************************************\n");

    for (opcao = 1; opcao <= 6; opcao++)
    {
        if (opcao == 1)
        {
            printf("OPCAO %d: %d ^ %d = %d\n",opcao,p,q,logica(opcao,p,q));
            }
        else if (opcao == 2)
        {
            printf("OPCAO %d: %d v %d = %d\n",opcao,p,q,logica(opcao,p,q));
        }
        else if (opcao == 3)
        {
            printf("OPCAO %d: %d _v_ %d = %d\n",opcao,p,q,logica(opcao,p,q));
        }
        else if (opcao == 4)
        {
            printf("OPCAO %d: %d --> %d = %d\n",opcao,p,q,logica(opcao,p,q));
        }
        else if (opcao == 5)
        {
            printf("OPCAO %d: %d <--> %d = %d\n",opcao,p,q,logica(opcao,p,q));
        }
        else
        {
            printf("OPCAO %d: OPCAO INEXISTENTE", opcao);
        }
    }
 // TESTANDO TODOS OS VALORES
    printf("\n***********************************************************\n");
    printf("Analise para toda a tabela verdade em cada um dos casos\n");
    printf("***********************************************************\n");
    nota = 0.0;
    soma = 0;
    p = 1; q = 1;
    if (logica(1,p,q)==1)
    {
        soma = 25 + soma;
    }
    p = 1; q = 0;
    if (logica(1,p,q)==0)
    {
        soma = 25 + soma;
    }
    p = 0; q = 1;
    if (logica(1,p,q)==0)
    {
        soma = 25 + soma;
    }
    p = 0; q = 0;
    if (logica(1,p,q)==0)
    {
        soma = 25 + soma;
    }
    printf("p ^ q: %d por cento de acerto na tabela verdade completa\n",soma);
    nota = soma+nota;

    soma = 0;
    p = 1; q = 1;
    if (logica(2,p,q)==1)
    {
        soma = 25 + soma;
    }
    p = 1; q = 0;
    if (logica(2,p,q)==1)
    {
        soma = 25 + soma;
    }
    p = 0; q = 1;
    if (logica(2,p,q)==1)
    {
        soma = 25 + soma;
    }
    p = 0; q = 0;
    if (logica(2,p,q)==0)
    {
        soma = 25 + soma;
    }
    printf("p v q: %d por cento de acerto na tabela verdade completa\n",soma);    
    nota = soma+nota;
    soma = 0;
    p = 1; q = 1;
    if (logica(3,p,q)==0)
    {
        soma = 25 + soma;
    }
    p = 1; q = 0;
    if (logica(3,p,q)==1)
    {
        soma = 25 + soma;
    }
    p = 0; q = 1;
    if (logica(3,p,q)==1)
    {
        soma = 25 + soma;
    }
    p = 0; q = 0;
    if (logica(3,p,q)==0)
    {
        soma = 25 + soma;
    }
    printf("p _v_ q: %d por cento de acerto na tabela verdade completa\n",soma);
    nota = soma+nota;
    soma = 0;
    p = 1; q = 1;
    if (logica(4,p,q)==1)
    {
        soma = 25 + soma;
    }
    p = 1; q = 0;
    if (logica(4,p,q)==0)
    {
        soma = 25 + soma;
    }
    p = 0; q = 1;
    if (logica(4,p,q)==1)
    {
        soma = 25 + soma;
    }
    p = 0; q = 0;
    if (logica(4,p,q)==1)
    {
        soma = 25 + soma;
    }
    printf("p --> q: %d por cento de acerto na tabela verdade completa\n",soma);
    nota = soma+nota;
    soma = 0;
    p = 1; q = 1;
    if (logica(5,p,q)==1)
    {
        soma = 25 + soma;
    }
    p = 1; q = 0;
    if (logica(5,p,q)==0)
    {
        soma = 25 + soma;
    }
    p = 0; q = 1;
    if (logica(5,p,q)==0){

        soma = 25 + soma;
    }
    p = 0; q = 0;
    if (logica(5,p,q)==1)
    {
        soma = 25 + soma;
    }
    printf("p <--> q: %d por cento de acerto na tabela verdade completa\n",soma);
    nota = soma+nota;
    printf("\n***************************\n");
    printf("Nota da atividade = %.2f \n",0.1*nota/5);
    printf("*****************************\n");
    return 0;
}
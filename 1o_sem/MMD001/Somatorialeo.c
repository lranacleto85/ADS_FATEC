// ATIVIDADE 3 //
// MATEMATICA DISCRETA ADS //
// Enviar apenas o arquivo.C (pode ser txt). Nao enviar word, pdf ou outra extensao.
// Todos os integrantes do grupo devem enviar a mesma atividade feita pela equipe
// Inserir o nome completo de todos os integrantes

//////////////////////////////////////////////////////////////////////////
///       FUNCAO PRINCIPAL A SER IMPLEMENTADA PELO GRUPO               ///
///       FUNCAO RECEBE  os inteiros OPCAO, n                       ///
///       FUNCAO IRA RETORNAR:                                        ///
///               aproximacao do numero de Euler e - SE OPCAO 1    ///
///               aproximacao do número de Euler pi - SE OPCAO 2        ///
///               -1 - SE OUTRA   OPCAO                                  ///
///////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <math.h>

int fatorial(int n, int fat)
{
    for (fat = 1; n > 1; n = n - 1)
    {
        fat = fat * n;
    }
    return fat;
}

float aproximacao(int opcao, int n)
{
    float euler = 0;
    float pi = 0;
    switch (opcao)
    {
    case 1:
        for (int k = 0; k <= n; k++)
        {
            euler = euler + (1.0 / fatorial(k, n));
        }
        return euler;
        break;
    case 2:
        for (int k = 0; k <= n; k++)
        {
            pi = pi + 8.0/((4 * k + 1) * (4 * k + 3));
        }
        return pi;
        break;
    }
    return -1;
}
/////////////////////////
/// CODIGO PARA TESTE ///
////////////////////////
int main()
{

    int opcao, n;

    printf("***********************************************************\n");
    printf("APROXIMACAO DAS CONSTANTES NUMERO DE EULER e PI\n");
    printf("***********************************************************\n");

    for (opcao = 1; opcao <= 3; opcao++)
    {
        if (opcao == 1)
        {
            for (n = 0; n <= 5; n++)
            {
                printf("OPCAO %d: e(n = %d) = %f\n", opcao, n, aproximacao(opcao, n));
            }
        }
        else if (opcao == 2)
        {
            for (n = 0; n <= 5; n++)
            {
                printf("OPCAO %d: pi(n = %d) = %f\n", opcao, n, aproximacao(opcao, n));
            }
        }
        else
        {
            printf("OPCAO %d: OPERACAO INEXISTENTE", opcao);
        }
    }
    return 0;
}
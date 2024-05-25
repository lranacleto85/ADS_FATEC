#include <stdio.h>

int fatorial(int num)
{
    int fat;

    for (fat = 1; num > 1; num = num - 1)
    {
        fat = fat * num;
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
            euler = euler + (1.0 / fatorial(k));
        }
        return euler;

    case 2:
        for (int k = 0; k <= n; k++)
        {
            pi = pi + 8.0 / ((4 * k + 1) * (4 * k + 3));
        }
        return pi;
    }
    return 0;
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
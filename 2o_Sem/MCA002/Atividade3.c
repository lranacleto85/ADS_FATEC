//ATIVIDADE 3 - CÁLCULO
//DOCENTE: MÁRCIO SABINO
//DISCENTE: LEONARDO RAMOS ANACLETO 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    int opcao, k;
    double x, resultado;

    do
    {
        printf("\nMENU:\n");
        printf("1 - f(x) = x^k\n");
        printf("2 - f(x) = ln(x)\n");
        printf("3 - f(x) = sin(x)\n");
        printf("4 - SAIR\n");
        printf("Escolha a função a ser derivada e avaliada em x: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite k: ");
            scanf("%d", &k);
            if (k <= 0)
            {
                printf("O valor de k deve ser maior que zero. Tente novamente.\n");
                break;
            }
            printf("Digite x: ");
            scanf("%lf", &x);
            resultado = pow(x, k);
            printf("f1(%.2lf) = %.2lf\n", x, resultado);
            break;

        case 2:
            printf("Digite x: ");
            scanf("%lf", &x);
            if (x <= 0)
            {
                printf("O valor de x deve ser maior que zero para a função ln(x). Tente novamente.\n");
                break;
            }
            resultado = log(x);
            printf("f2(%.2lf) = %.2lf\n", x, resultado);
            break;

        case 3:
            printf("Digite x: ");
            scanf("%lf", &x);
            resultado = sin(x);
            printf("f3(%.2lf) = %.2lf\n", x, resultado);
            break;

        case 4:
            printf("SAINDO...\n");
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}

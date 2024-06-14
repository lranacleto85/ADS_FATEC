#include <stdio.h>
#include <math.h>
#include <unistd.h>

#define euler 2.71828183

void mostrar_regras();
int calcula_integral(int operation);

int main()
{
    int op = 0;
    while (op != 5)
    {
        printf("Escolha uma opção para calcular a integral = \\int(a,b)f(x)dx:\n");
        printf("\t1. f(x) = x^k\n");
        printf("\t2. f(x) = 1/x\n");
        printf("\t3. f(x) = cos(x)\n");
        printf("\t4. Ver regras de cada função\n");
        printf("\t5. SAIR\n\n");
        printf("Digite: ");
        scanf("%d", &op);
        if (op == 4)
        {
            mostrar_regras();
        }
        else if (op != 5)
        {
            calcula_integral(op);
            sleep(2);
        }
    }
    return 0;
}

void mostrar_regras()
{
    printf("Regras das funções:\n");
    printf("1. f(x) = x^k:\n");
    printf("   - A integral de x^k é definida para todos os valores de k.\n");
    printf("   - Para k = -1, a integral é indefinida porque resulta em uma divisão por zero.\n");
    printf("2. f(x) = 1/x:\n");
    printf("   - A integral de 1/x é indefinida em x = 0.\n");
    printf("   - Evite usar limites de integração que incluam x = 0.\n");
    printf("3. f(x) = cos(x):\n");
    printf("   - A integral de cos(x) é sen(x).\n");
    printf("   - Não há restrições nos limites de integração.\n");
    printf("\n");
}

int calcula_integral(int operation)
{
    double a, b, k, res;

    switch (operation)
    {
    case 1:
        printf("Digite o valor de k: ");
        scanf("%lf", &k);
        printf("Digite o valor de a: ");
        scanf("%lf", &a);
        printf("Digite o valor de b: ");
        scanf("%lf", &b);
        if (k == -1)
        {
            printf("Não é possível calcular => k = -1\n\n");
            return 0;
        }
        res = (pow(b, (k + 1)) / (k + 1)) - (pow(a, (k + 1)) / (k + 1));
        printf("\nIntegral(%lf, %lf) x^%lf dx = %.4lf\n\n", a, b, k, res);
        break;
    case 2:
        printf("Digite o valor de a: ");
        scanf("%lf", &a);
        printf("Digite o valor de b: ");
        scanf("%lf", &b);
        if (a == 0 || b == 0)
        {
            printf("Não é possível calcular para a ou b igual a 0\n\n");
            return 0;
        }
        res = log(b) - log(a);
        printf("\nIntegral(%lf, %lf) 1/x dx = %.4lf\n\n", a, b, res);
        break;
    case 3:
        printf("Digite o valor de a: ");
        scanf("%lf", &a);
        printf("Digite o valor de b: ");
        scanf("%lf", &b);
        res = sin(b) - sin(a);
        printf("\nIntegral(%lf, %lf) cos(x) dx = %.4lf\n\n", a, b, res);
        break;
    default:
        printf("Digite uma opção válida!\n\n");
        break;
    }
    return 0;
}

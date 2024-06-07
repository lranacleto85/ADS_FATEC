#include <stdio.h>
double media(int *p_valores, int t);
int maior(int *p_valores, int t);
int menor(int *p_valores, int t);
void imprimirRecursivo(int *ptr, int t);
int main()
{
    int valores[] = {10, 20, 30, 40, 50, 60};
    printf("Media: %2.2lf \n", media(valores, 6));
    printf("Maior: %d \n", maior(valores, 6));
    printf("Menor: %d \n", menor(valores, 6));
    imprimirRecursivo(valores, 6);
    return 0;
}
double media(int *p_valores, int t)
{
    double total = 0.0;
    for (int i = 0; i < t; i++)
    {
        total += *p_valores++;
    }
    return total / t;
}
int maior(int *p_valores, int t)
{
    int maior = *p_valores;
    p_valores++;
    for (int i = 1; i < t; ++i)
    {
        if (maior < *p_valores)
        {
            maior = *p_valores;
        }
        p_valores++;
    }
    return maior;
}
int menor(int *p_valores, int t)
{
    int menor = *p_valores;
    p_valores++;
    for (int i = 1; i < t; ++i)
    {
        if (menor > *p_valores)
        {
            menor = *p_valores;
        }
        p_valores++;
    }
    return menor;
}
void imprimirRecursivo(int *ptr, int t)
{
    if (t == 0)
        return;
    ptr++;
    imprimirRecursivo(ptr, t - 1);
    ptr--;
    printf("%d\n", *ptr);
}
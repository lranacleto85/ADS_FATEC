#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PI 3.14159265359

int main(void)
{
    double raio, area, perimetro;

    printf("Digite o raio circunferência: \n");
    scanf("%lf", &raio);

    area = PI * raio * raio;
    perimetro = 2 * PI * raio;
    printf("Área da circunferência: %.2lf \n", area);
    printf("Perímetro da circunferência: %.2lf \n", perimetro);

    return 0;
}


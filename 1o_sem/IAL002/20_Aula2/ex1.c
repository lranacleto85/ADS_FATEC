#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese_Brazil");
    char nome[10];
    int salario;
    float novoSalario;
    float novosalariliquido;
    float aumento;
    float inss;
    float aliquota;

    printf("Digite o nome do colaborador: ");
    scanf("%s", nome);
    printf("Digite o salário do colaborador: ");
    scanf("%d", &salario);

    // Calculo do aumento de 10% do salï¿½rio
    aumento = salario * 0.10;
    novoSalario = salario + aumento;

    // Calculo de INSS
    if (novoSalario <= 1100) {
        aliquota = 0.08;
    } else if (novoSalario >= 1101 && novoSalario <= 1890) {
        aliquota = 0.11;
    } else if (novoSalario >= 1891 && novoSalario <= 4200) {
        aliquota = 0.18;
    } else {
        aliquota = 0.19;
    }

    inss = salario * aliquota;
    novosalariliquido = novoSalario - inss; 

    // Exibi??o dos resultados
    printf("\nNome do funcionário: %s\n", nome);
    printf("Salário antigo: R$%d\n", salario);
    printf("Novo salário: R$%.2f\n", novoSalario);
    printf("Aumento oferecido: R$%.2f\n", aumento);
    printf("Desconto de INSS: R$%.2f\n", inss);
    printf("Novo salário líquido: R$%.2f\n", novosalariliquido);

    return 0;
}
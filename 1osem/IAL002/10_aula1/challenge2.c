#include <stdio.h>
#include <locale.h>

int main(void)
{
setlocale(LC_ALL, "Portuguese_Brazil");
    char nome[10];
    char nomeproduto[10];
    int quantidade;
    int valorunitario;
    int continua = 1; // Inicializa com 1 para entrar no loop
    float valortotal = 0;
    float desconto = 0;
    float valortotaldesconto = 0;
    float valortotalfinal = 0;
    float parcela = 0;

    printf("\n Informe seu nome: ");
    scanf("%s", nome);

    while (continua == 1) {
        printf("\n Informe o produto adquirido: ");
        scanf("%s", nomeproduto);
        printf("\n Informe a quantidade comprada: ");
        scanf("%i", &quantidade);
        printf("\n Informe o valor unitário do produto adquirido: R$ ");
        scanf("%i", &valorunitario);

        valortotal += quantidade * valorunitario;

        printf("\n O valor total da compra até agora é de: R$ %.2f", valortotal);
        printf("\n Deseja continuar comprando? (1 para continuar / 0 para finalizar): ");
        scanf("%i", &continua);
    }

    // C�lculo de desconto
    printf("\n\n");
    printf("Escolha a forma de pagamento:\n");
    printf("1 - à vista com 10%% de desconto\n");
    printf("2 - Parcelar\n");
    int opcao;
    scanf("%d", &opcao);

    if (opcao == 1) {
        desconto = 0.1 * valortotal;
        valortotaldesconto = valortotal - desconto;
        printf("\n Valor total com desconto: R$ %.2f", valortotaldesconto);
    } else if (opcao == 2) {
        printf("Quantas parcelas deseja? ");
        int numParcelas;
        scanf("%d", &numParcelas);

        if (numParcelas >= 2 && numParcelas <= 5) {
            valortotalfinal = valortotal;
        } else if (numParcelas >= 6 && numParcelas <= 10) {
            valortotalfinal = valortotal + (0.08 * valortotal);
        } else if (numParcelas > 10) {
            valortotalfinal = valortotal + 300 + (0.12 * valortotal);
        }

        parcela = valortotalfinal / numParcelas;
        printf("\n Valor total parcelado em %d vezes: R$ %.2f", numParcelas, valortotalfinal);
        printf("\n Valor de cada parcela: R$ %.2f", parcela);
    }

    return 0;
}
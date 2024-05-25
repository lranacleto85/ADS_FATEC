#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

// Função para exibir o menu
void menuMessage()
{
    printf("***************************\n");
    printf("******* MENU ARRAY ********\n");
    printf("***************************\n");
    printf("\n1. Inserir número no vetor");
    printf("\n2. Exibir/Listar o vetor");
    printf("\n3. Consultar no vetor");
    printf("\n4. Ordenar o vetor (ascendente)");
    printf("\n5. Sair do programa\n");
}

// Função para inserir número no vetor
void insertNumber(int array[], int *arrayPosition)
{
    if (*arrayPosition <= MAX_SIZE)
    {
        printf("Digite um número para inserir na posição %d do vetor: ", *arrayPosition);
        scanf("%d", &array[*arrayPosition - 1]);
        (*arrayPosition)++;
    }
    else
    {
        printf("Você já inseriu itens em todas as posições do vetor.\n");
    }
}

// Função para exibir o vetor
void displayArray(int array[], int arrayPosition)
{
    printf("Exibindo o vetor de 5 posições das quais você já inseriu: %d/5 números\n",
        arrayPosition > MAX_SIZE ? MAX_SIZE : arrayPosition - 1);
    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("Vetor[%d]: %d\n", i + 1, array[i]);
    }
}

// Função para pesquisar no vetor
void searchInArray(int array[], int arrayPosition)
{
    // Implemente a pesquisa por número e posição aqui
}

// Função para ordenar o vetor
void sortArray(int array[], int arrayPosition)
{
    // Implemente a ordenação do vetor aqui
}

int main(void)
{
    bool exitMenu = false, arrayIsNotNull = false;
    int menuOption, arrayPosition = 1, subMenuOption, search, foundSearchPosition;

    int array[MAX_SIZE] = {0}; // Inicializa o vetor com zeros

    while (!exitMenu)
    {
        menuMessage();
        scanf("%d", &menuOption);

        switch (menuOption)
        {
        case 1:
            insertNumber(array, &arrayPosition);
            arrayIsNotNull = true;
            break;

        case 2:
            if (arrayIsNotNull)
            {
                displayArray(array, arrayPosition);
            }
            else
            {
                printf("Você ainda não inseriu nada no vetor. Por favor, passe pela opção de inserir\n");
            }
            break;

        case 3:
            searchInArray(array, arrayPosition);
            break;

        case 4:
            sortArray(array, arrayPosition);
            break;

        case 5:
            printf("Saindo do programa...\n\n");
            exitMenu = true;
            break;

        default:
            printf("Por favor, digite um número válido do menu.\n\n");
            break;
        }
    }

    return EXIT_SUCCESS;
}

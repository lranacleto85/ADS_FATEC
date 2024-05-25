// ATIVIDADE 2 
//     FUNCAO PRINCIPAL A SER IMPLEMENTADA            
//     FUNCAO RECEBE  os inteiros OPCAO, n, k                       
//     FUNCAO IRA RETORNAR:                                        
//             permutacao de n - SE OPCAO 1                       
//              Arranjo de n tomados de k em k - SE OPCAO 2        
//             Combinaco de n tomados de k em k - SE OPCAO 3 
// A funcao a ser implementada
#include <stdio.h>
#include <math.h>
#include<stdbool.h>

// A funcao a ser implementada
int fatorial(int n) 
{
    if (n == 0 || n == 1)
        return 1;
    else if (n < 0) 
        return -2;
    else
        return n * fatorial(n - 1);
}


int combinatoria(int opcao, int n, int k)
{
    int resultado;

    switch (opcao) {
    case 1: // Permutacao de n
        resultado = fatorial(n);
        break;

    case 2: // Arranjo de n tomados de k em k
        if (k > n) {
            resultado = -2;  // Arranjo não é possível quando k > n //retornar -2 conforme código do professor, senão vai dar errado
        } else {
            resultado = fatorial(n) / fatorial(n - k);
        }
        break;

    case 3: // Combinacao de n tomados de k em k
        if (k > n) {
            resultado = -2;  // Combinação não é possível quando k > n //retornar -2 conforme código do professor, senão vai dar errado
        } else {
            resultado = fatorial(n) / (fatorial(k) * fatorial(n - k));
        }
        break;

    default:
        printf("OPCAO %d: OPERACAO INEXISTENTE", opcao);
        resultado = -2;
        break;
    }

    return resultado;

}


// NAO MODIFICAR O CODIGO TESTE ABAIXO///
int main()
{
    int opcao, n, k, soma;
    float nota;
   
    n = 5;
    k = 2;
    printf("***********************************************************\n");
    printf("ANALISE COMBINATORIA (SEM REPETICAO)\n");
    printf("Considerando n = %d e k = %d em cada uma das opcoes\n",n,k);
    printf("***********************************************************\n");

    for (opcao = 1; opcao <= 3; opcao++){
        if (opcao == 1){
            printf("OPCAO %d: P(%d) = %d\n",opcao,n,combinatoria(opcao,n,k));
            }
        else if (opcao == 2){
            printf("OPCAO %d: A(%d,%d) = %d\n",opcao,n,k,combinatoria(opcao,n,k));
        }
        else if (opcao == 3){
            printf("OPCAO %d: C(%d,%d) = %d\n",opcao,n,k,combinatoria(opcao,n,k));
        }
        else{
            printf("OPCAO %d: OPERACAO INEXISTENTE", opcao);
        }
    }
 
// TESTANDO ALGUNS CASOS
    printf("\n***********************************************************\n");
    printf("*** Analisando alguns casos validos e invalidos ***\n");
    printf("***********************************************************\n");
    nota = 0.0;
    soma = 0;

    if (combinatoria(1,0,1)==1){
        soma = 1 + soma;
        printf("P(0) = %d, resposta correta\n",combinatoria(1,0,1));
    }
   
    if (combinatoria(1,0,1)!=1){
            printf("Sua resposta: P(0) = %d\n", combinatoria(1,0,1));
            printf("Mas P(0) = 1, resposta incorreta\n");
    }
   
    if (combinatoria(1,1,1)==1){
        soma = 1 + soma;
        printf("P(1) = %d, resposta correta\n",combinatoria(1,1,1));
    }
   
    if (combinatoria(1,1,1)!=1){
            printf("Sua resposta: P(1) = %d. ", combinatoria(1,1,1));
            printf("Mas P(1) = 1, resposta incorreta\n");
    }
   
    if (combinatoria(1,5,2)==120){
        soma = 1 + soma;
        printf("P(5) = %d, resposta correta\n",combinatoria(1,5,2));
    }
   
    if (combinatoria(1,5,2)!=120){
            printf("Sua resposta: P(5) = %d. ",combinatoria(1,5,2));
            printf("Mas P(5) = 120, resposta incorreta\n");
    }
   
    if (combinatoria(1,-5,2)==-2){
        soma = 1 + soma;
        printf("P(-5) nao existe pq n<0, resposta correta\n");
    }
   
    if (combinatoria(1,-5,2)!=-2){
            printf("Sua resposta: P(-5) = %d. ",combinatoria(1,-5,2));
            printf("Mas P(-5) nao existe pq n<0, resposta incorreta\n");
    }
   
    if (combinatoria(2,5,2)==20){
        soma = 1 + soma;
        printf("A(5,2) = %d, resposta correta\n",combinatoria(2,5,2));
    }
   
    if (combinatoria(2,5,2)!=20){
            printf("Sua resposta: A(5,2) = %d. ",combinatoria(2,5,2));
            printf("Mas A(5,2) = 20, resposta incorreta\n");
    }
       
    if (combinatoria(2,2,5)==-2){
        soma = 1 + soma;
        printf("A(2,5) nao existe pq n<k, resposta correta\n");
    }
   
    if (combinatoria(2,2,5)!=-2){
            printf("Sua resposta: A(2,5) = %d. ",combinatoria(2,2,5));
            printf("Mas A(2,5) nao existe pq n<k, resposta incorreta\n");
    }
         
    if (combinatoria(3,5,2)==10){
        soma = 1 + soma;
        printf("C(5,2) = %d, resposta correta\n",combinatoria(3,5,2));
    }
   
    if (combinatoria(3,5,2)!=10){
            printf("Sua resposta: C(5,2) = %d. ",combinatoria(3,5,2));
            printf("Mas C(5,2) = 10, resposta incorreta\n");
    }
       
    if (combinatoria(3,2,5)==-2){
        soma = 1 + soma;
        printf("C(2,5) nao existe pq n<k, resposta correta\n");
    }
   
    if (combinatoria(3,2,5)!=-2){
            printf("Sua resposta: C(2,5) = %d. ",combinatoria(3,2,5));
            printf("Mas C(2,5) nao existe pq n<k, resposta incorreta\n");
    }
         
    nota = soma;
   
    printf("\n***************************\n");
    printf("Nota da atividade = %.2f \n",10*nota/8);
    printf("*****************************\n");
   
    return 0;
}
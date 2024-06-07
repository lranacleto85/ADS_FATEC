#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define MAX_PRIMES 10000 // Tamanho máximo da lista de números primos pré-calculados

bool is_prime(long long n) {
    if (n <= 1) return false; // 0 e 1 não são primos
    if (n <= 3) return true; // 2 e 3 são primos
    if (n % 2 == 0 || n % 3 == 0) return false; // Divisível por 2 ou 3 não é primo
    
    long long i;
    for (i = 5; i * i <= n; i += 6) { // Verificar apenas até a raiz quadrada de n
        if (n % i == 0 || n % (i + 2) == 0) {
            return false; // Se for divisível por algum número na forma 6k ± 1, não é primo
        }
    }
    return true; // Se não for divisível por nenhum número até a raiz quadrada de n, é primo
}

int main() {
    long long num;
    printf("Digite um número inteiro positivo para verificar se é primo: ");
    scanf("%lld", &num);

    if (is_prime(num)) {
        printf("%lld é um número primo.\n", num);
    } else {
        printf("%lld não é um número primo.\n", num);
    }

    return 0;
}


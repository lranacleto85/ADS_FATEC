#include "fatorial.h"

unsigned long long calcularFatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    unsigned long long fatorial = 1;
    for (int i = 2; i <= n; ++i) {
        fatorial *= i;
    }
    return fatorial;
}

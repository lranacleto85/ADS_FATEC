#include <stdio.h>
#include "math_operations.h"

    int main() {
        float a = 5, b = 3;

        printf("Soma: %d\n", add(a, b));
        printf("Subtração: %d\n", subtract(a, b));
        printf("Multiplicação: %.2d\n", multiply(a, b));
        printf("Divisão: %.4d\n", division(a, b));
        return 0;
    }

    

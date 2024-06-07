#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fibo(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    printf("%d\n", fibo(7));
    return 0;
}
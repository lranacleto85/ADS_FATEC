#include <stdio.h>
    void up(int n){
        if (n == 0)
            return;
        up(n - 1);
        printf("%d\n", n);
    }
    void down(int n){
        if (n == 0)
            return;
        printf("%d\n", n);
        down(n - 1);
    }


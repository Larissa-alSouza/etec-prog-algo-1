/* 5- A série de Fibonacci é uma sequência de termos que tem como os 2
primeiros termos, respectivamente, os números 1 e 1. A partir daí, os
demais termos são formados seguindo uma certa regra. A série de
Fibonacci pode ser vista a seguir:
1 1 2 3 5 8 13 21...*/

#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c;

    printf("Quantos termos da sequência de Fibonacci você quer ver? ");
    scanf("%d", &n);

    printf("Sequência de Fibonacci:\n");

    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}

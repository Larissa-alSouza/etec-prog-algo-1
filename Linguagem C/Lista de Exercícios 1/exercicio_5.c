/* 5- Escreva um algoritmlo que leia três números inteiros e positivos (a, b, c) e calcule a seguinte expressão: d = (r + s) / 2. Onde: r = (a + b) / c e s = (b + c) / a */

#include <stdio.h>

int main() {
    
    int a, b, c;
    float d, r, s;
    
    printf("Insira o primeiro número: ");
    scanf("%d", &a);
    
    printf("Insira o segundo número: ");
    scanf("%d", &b);
    
    printf("Insira o terceiro número: ");
    scanf("%d", &c);
    
    r = (a + b) / c;
    s = (b + c) / a;
    d = (r + s) / 2;
    
    printf("%.2f", d);
}

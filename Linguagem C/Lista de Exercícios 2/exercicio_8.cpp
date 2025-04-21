/* 8. Ler quatro números inteiros e calcular a soma dos que forem par. */

#include <stdio.h>

int main() {
    
    int a, b, c, d, p = 0;
    
    printf("Insira o primeiro numero: ");
    scanf("%d", &a);
    
    printf("Insira o segundo numero: ");
    scanf("%d", &b);
    
    printf("Insira o terceiro numero: ");
    scanf("%d", &c);
    
    printf("Insira o terceiro numero: ");
    scanf("%d", &d);
    
    if(a % 2 == 0)
    {
        p = p + a;
    }
    if(b % 2 == 0)
    {
        p = p + b;
    }
    if(c % 2 == 0)
    {
        p = p + c;
    }
    if(d % 2 == 0)
    {
        p = p + d;
    }
    
    printf("%d", p);

    return 0;
}

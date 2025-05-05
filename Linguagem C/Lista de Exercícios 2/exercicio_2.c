/* 2- Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e converta-a para apenas em dias */

#include <stdio.h>

int main() {
    
    int a, m, d, as, ms, result;
    
    printf("Insira os anos: ");
    scanf("%d", &a);
    
    printf("Insira os meses: ");
    scanf("%d", &m);
    
    printf("Insira os dias: ");
    scanf("%d", &d);
    
    as = a * 365;
    ms = m * 30;
    result = as + ms + d;
    
    printf("Dias: %d", result);

    return 0;
}

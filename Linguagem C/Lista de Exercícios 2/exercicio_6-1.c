/* 6.1- Para ler três números reais do teclado e verificar se o primeiro é maior que a soma dos outros dois. */

#include <stdio.h>

int main() {
    
    float x, y, z, result;
    
    printf("Insira o primeiro numero: ");
    scanf("%f", &x);
    
    printf("Insira o segundo numero: ");
    scanf("%f", &y);
    
    printf("Insira o terceiro numero: ");
    scanf("%f", &z);
    
    result = y + z;
    
    if(x > result)
    {
        printf("O primeiro valor é maior que a soma do segundo e terceiro valor.");
    }
    else
    {
        printf("O primeiro valor não é maior que a soma do segundo e terceiro valor.");
    }

    return 0;
}

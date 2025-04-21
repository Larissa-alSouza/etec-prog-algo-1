/* 6.2. Para ler três números reais do teclado e verificar se o primeiro é maior que a soma dos outros dois. */

#include <stdio.h>

int main() {
    
    float x, y, z;
    
    printf("Insira o primeiro numero: ");
    scanf("%f", &x);
    
    printf("Insira o segundo numero: ");
    scanf("%f", &y);
    
    printf("Insira o terceiro numero: ");
    scanf("%f", &z);
    
    if(x > y + z)
    {
        printf("O primeiro valor é maior que a soma do segundo e terceiro valor.");
    }
    else if(x < y + z)
    {
        printf("O primeiro valor não é maior que a soma do segundo e terceiro valor.");
    }
    else
    {
        printf("O primeiro número é igual a soma do segundo e terceiro números.");
    }

    return 0;
}

/* 7. Ler três valores e determinar o maior dentre eles. */

#include <stdio.h>

int main() {
    
    float x, y, z;
    
    printf("Insira o primeiro numero: ");
    scanf("%f", &x);
    
    printf("Insira o segundo numero: ");
    scanf("%f", &y);
    
    printf("Insira o terceiro numero: ");
    scanf("%f", &z);
    
    if(x > y && x > z)
    {
        printf("O primeiro número é maior");
    }
    else if(x < y && y > z)
    {
        printf("O segundo número é maior");
    }
    else if(x < y && y < z)
    {
        printf("O terceiro número é maior");
    }

    return 0;
}

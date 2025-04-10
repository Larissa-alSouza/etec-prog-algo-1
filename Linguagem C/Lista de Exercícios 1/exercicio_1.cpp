/* 1- Faça um algoritmo que apresente umvalor pelo teclado e mostre como seu resultado seu dobro e a sua metade */

#include <stdio.h>

int main() {
    
    float num, metade, dobro;
    
    printf("Insira uma número: ");
    scanf("%f", &num);
    
    metade = num / 2;
    dobro = num *  2;
    
    printf("Metade: %.2f e Dobro: %.2f", metade, dobro);

    return 0;
}

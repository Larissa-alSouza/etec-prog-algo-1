/* 2- Leia um número e mostre como seu resultado seu antecessor e seu sucessor */

#include <stdio.h>

int main() {
    
    float num, ant, suc;
    
    printf("Insira uma número: ");
    scanf("%f", &num);
    
    ant = num - 1;
    suc = num + 1;
    
    printf("Antecessor: %.2f e Sucessor: %.2f", ant, suc);

    return 0;
}

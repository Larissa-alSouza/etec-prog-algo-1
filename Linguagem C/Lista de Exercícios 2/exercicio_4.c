/* 4- Que gere o preço de um carro ao consumidor e os valores pagos pelo lucro do distribuidor, sabendo o custo de fábrica do carro e que são: 
    a) de imposto: 45% sobre o custo do carro;
    b) de lucro do distribuidor: 12% sobre o custo do carro*/

#include <stdio.h>

int main() {
    
    int cf, im, ld, pf;
    
    printf("Insira o custo de fabricação do carro: ");
    scanf("%d", &cf);
    
    im = cf * 0.45;
    ld = cf * 0.12;
    pf = cf + im + ld;
    
    printf("O preco final do carro e de: %d, o valor de impostos e de: %d e o lucro do sitribuidor e de: %d", pf, im, ld);

    return 0;
}

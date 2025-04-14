/* 3- Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa em segundos e mostre o expresso em horas, minutos e segundos */

#include <stdio.h>

int main() {
    
    int de, s, x;
    float h, m;
    
    printf("Insira a duração do evento em segundos: ");
    scanf("%d", &de);
    
    h = de / 3600;
    x = de % 3600;
    m = x / 60;
    s = x % 60;
    
    printf("O total em horas foi: %.2f, em minutos: %.2f e em segundos: %.2d", h, m, s);

    return 0;
}

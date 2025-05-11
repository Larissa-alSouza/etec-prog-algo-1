/* 1- Escrever um programa que leia uma sequência de valores inteiros, até ser
lido o valor -99. Quando isso acontecer o programa deverá mostrar a
soma e a média dos valores lidos. */

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float num, soma = 0, media = 0, contador = 0;

    while(true) {
        
        printf("Digite uma sequência de números inteiros (digite -99 para encerrar):\n");
        scanf("%f", &num);

        if (num == -99)
            break;

        soma += num;
        contador++;
    }

    if (contador > 0) {
        media = (float)soma / contador;
        printf("Soma: %.2f", soma);
        printf("\nMédia: %.2f", media);
    } else {
        printf("Nenhum número válido foi digitado.\n");
    }

    return 0;
}

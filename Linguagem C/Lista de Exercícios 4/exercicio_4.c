/*  4- Gerar a tabuada de um valor solicitado pelo usuário e verificar se ele deseja novo cálculo de tabuada */

#include <stdio.h>

int main() {
    
    int num, i, tab;

    printf("Insira um número: ");
    scanf("%d", &num);
    printf("\n");

    for(i  = 0; i <= 10; i++)
    {
        tab = num * i;
        printf("%d X %d = %d \n", num, i, tab);
    }
    
    return 0;
}

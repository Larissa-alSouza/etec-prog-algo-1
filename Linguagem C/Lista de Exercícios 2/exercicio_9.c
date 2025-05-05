/* 9. Que informe se um dado ano é bissexto ou não bissexto. OBS: um ano é bissexto se ele for divisível por 400 ou por 4 e não for divisível por 100. */

#include <stdio.h>

int main() {
    
    int ano;
    
    printf("Qual ano voce gostaria de verificar? ");
    scanf("%d", &ano);
    
    if(ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
    {
        printf("O ano de %d é bissexto!", ano);
    }
    else
    {
        printf("O ano de %d não é bissexto!", ano);
    }

    return 0;
}

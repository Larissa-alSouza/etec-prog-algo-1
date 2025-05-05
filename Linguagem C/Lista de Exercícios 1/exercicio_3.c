/* 3- Calcular a idade de uma pessoa, a partir do seu ano de nascimento. Informar também seu nome e mostrarcomo resultado o nome e a idade */

#include <stdio.h>

int main() {
    
    int ano_nasc, ano_atual, idade;
    char nome[10];
    
    printf("Insira seu nome: ");
    scanf("%s", &nome);
    
    printf("Insira o ano atual: ");
    scanf("%d", &ano_atual);
    
    printf("Insira o ano do seu nascimento: ");
    scanf("%d", &ano_nasc);
    
    idade = ano_atual - ano_nasc;
    
    printf("%s, sua idade é: %d", nome, idade);

    return 0;
}

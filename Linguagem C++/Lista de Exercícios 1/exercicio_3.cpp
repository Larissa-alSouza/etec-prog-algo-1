/* 3- Calcular a idade de uma pessoa, a partir do seu ano de nascimento. Informar também seu nome e mostrarcomo resultado o nome e a idade */

#include <locale.h>
#include <iostream>
using namespace std;

int main() {
    
    int ano_nasc, ano_atual, idade;
    char nome[10];
    
    cout << "Insira seu nome: ";
    cin >> nome;
    
    cout << "Insira o ano atual: ";
    cin >> ano_atual;
    
    cout << "Insira o ano do seu nascimento: ";
    cin >> ano_nasc;
    
    idade = ano_atual - ano_nasc;
    
    cout << nome << ", sua idade é: " << idade << "\n";

    return 0;
}

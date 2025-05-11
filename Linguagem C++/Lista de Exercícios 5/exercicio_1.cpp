/* 1- Escrever um programa que leia uma sequência de valores inteiros, até ser
lido o valor -99. Quando isso acontecer o programa deverá mostrar a
soma e a média dos valores lidos.
*/

#include <locale.h>
#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Portuguese");
    
    int num, soma = 0, media = 0, contador = 0;

    while (true) {
        
        cout << "Digite uma sequência de números inteiros (digite -99 para encerrar):\n";
            
        cin >> num;

        if (num == -99)
            break;

        soma += num;
        contador++;
    }

    if (contador > 0) {
        media = (float)soma / contador;
        cout << "Soma: " << soma << endl;
        cout << "Média: " << media << endl;
    } else {
        cout << "Nenhum número válido foi digitado.\n";
    }

    return 0;
}

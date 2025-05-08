/* 1- Faça um algoritmo que apresente umvalor pelo teclado e mostre como seu resultado seu dobro e a sua metade */

#include <locale.h>
#include <iostream>
using namespace std;

int main() {
    
    float num, metade, dobro;
    
    cout << "Insira uma número: ";
    cin >> num;
    
    metade = num / 2;
    dobro = num *  2;
    
    cout << "Metade: " << metade << " e Dobro: " << dobro << "\n";

    return 0;
}

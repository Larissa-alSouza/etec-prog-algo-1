/* 2- Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e converta-a para apenas em dias */

#include <locale.h>
#include <iostream>
using namespace std;

int main() {
    
    int a, m, d, as, ms, result;
    
    cout << "Insira os anos: ";
    cin >> a;
    
    cout << "Insira os meses: ";
    cin >> m;
    
    cout << "Insira os dias: ";
    cin >> d;
    
    as = a * 365;
    ms = m * 30;
    result = as + ms + d;
    
    cout << "Dias: " <<  result << "\n";

    return 0;
}

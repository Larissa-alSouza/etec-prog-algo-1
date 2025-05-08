/* 5- Escreva um algoritmlo que leia três números inteiros e positivos (a, b, c) e calcule a seguinte expressão: d = (r + s) / 2. Onde: r = (a + b) / c e s = (b + c) / a */

#include <locale.h>
#include <iostream>
using namespace std;

int main() {
    
    int a, b, c;
    float d, r, s;
    
    cout << "Insira o primeiro número: ";
    cin >> a;
    
    cout << "Insira o segundo número: ";
    cin >> b;
    
    cout << "Insira o terceiro número: ";
    cin >> c;
    
    r = (a + b) / c;
    s = (b + c) / a;
    d = (r + s) / 2;
    
    cout << d;
}

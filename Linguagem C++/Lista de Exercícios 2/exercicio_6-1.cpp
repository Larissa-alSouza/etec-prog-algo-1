/* 6.1- Para ler três números reais do teclado e verificar se o primeiro é maior que a soma dos outros dois. */

#include <locale.h>
#include <iostream>
using namespace std;

int main() {
    
    float x, y, z, result;
    
    cout << "Insira o primeiro numero: ";
    cin >> x;
    
    cout << "Insira o segundo numero: ";
    cin >> y;
    
    cout << "Insira o terceiro numero: ";
    cin >> z;
    
    result = y + z;
    
    if(x > result)
    {
        cout << "O primeiro valor é maior que a soma do segundo e terceiro valor.";
    }
    else
    {
        cout << "O primeiro valor não é maior que a soma do segundo e terceiro valor.";
    }

    return 0;
}

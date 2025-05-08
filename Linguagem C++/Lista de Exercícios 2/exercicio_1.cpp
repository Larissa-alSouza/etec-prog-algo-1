/* 1- Ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário */

#include <locale.h>
#include <iostream>
using namespace std;

int main() {
    
    float sf, pr, r, vr, ns;
    
    cout << "Digite o salario atual do funcionario: ";
    cin >> sf;
    
    cout << "Digite o perentual de reajuste: ";
    cin >> pr;
    
    r = pr / 100;
    vr = r * sf;
    ns = vr + sf;
    
    cout << "O novo salário e " << ns;

    return 0;
}

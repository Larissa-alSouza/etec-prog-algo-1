/* 4- Ler o salário mensal atual de um funcionário e o aumento de salário. Calcular e escrevaet o valor do novo salário. */

#include <locale.h>
#include <iostream>
using namespace std;

int main() {
    
    float salario, aumento, novo;
    
    cout << "Insira o salário do funcionário: ";
    cin >> salario;
    
    cout << "Insira o aumento que esse funcionário irá receber: ";
    cin >> aumento;
    
    novo = salario + aumento;
    
    cout << "O salário novo é: " << novo;

    return 0;
}

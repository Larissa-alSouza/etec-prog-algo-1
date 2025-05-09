/* 5- Leia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista estava dirigindo nela e calcule a multa que uma pessoa vai receber, sabendo que são pagos:
a) 50 reais, se o motorista ultrapassar em até 10km/h a velocidade permitida (ex: velocidade máxima: 50km/h; motorista  60km/h ou a 56km/h);
b) 100 reais, se o motorista ultrapassar de 11 a 30km/h a velocidade permitida;
c) 200 reais, se estiver acima de 31km/h da velocidade permitida. */

#include <locale.h>
#include <iostream>
using namespace std;

int main() {
    
    float carro, vm, result;
    
    cout << "Qual era a velocidade do motorista? ";
    cin >> carro;
    
    cout << "Qual era a  velocidade máxima da via? ";
    cin >> vm;
    
    result = carro - vm;
    
    if(result > 0 && result <= 10)
    {
        cout << "A multa será de R$ 50,00";
    }
    else if(result > 10 && result <= 30)
    {
        cout << "A multa será de R$ 100,00";
    }
    else if(result > 30)
    {
        cout << "A multa será de R$ 200,00";
    }
    else
    {
        cout << "Não terá multa!";
    }

    return 0;
}

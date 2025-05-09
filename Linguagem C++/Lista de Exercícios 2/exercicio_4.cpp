/* 4- Que gere o preço de um carro ao consumidor e os valores pagos pelo lucro do distribuidor, sabendo o custo de fábrica do carro e que são: 
    a) de imposto: 45% sobre o custo do carro;
    b) de lucro do distribuidor: 12% sobre o custo do carro*/

#include <locale.h>
#include <iostream>
using namespace std;

int main() {
    
    int cf, im, ld, pf;
    
    cout << "Insira o custo de fabricação do carro: ";
    cin >> cf;
    
    im = cf * 0.45;
    ld = cf * 0.12;
    pf = cf + im + ld;
    
    cout << "O preco final do carro e de " << pf << ", o valor de impostos e de: " << im << " e o lucro e de: " << ld;

    return 0;
}

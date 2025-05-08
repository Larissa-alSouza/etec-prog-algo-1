/* 3- Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa em segundos e mostre o expresso em horas, minutos e segundos */

#include <locale.h>
#include <iostream>
using namespace std;

int main() {
    
    int de, s, x;
    float h, m;
    
    cout << "Insira a duração do evento em segundos: ";
    cin >> de;
    
    h = de / 3600;
    x = de % 3600;
    m = x / 60;
    s = x % 60;
    
    cout << "O total em horas foi: " << h << ", em minutos: " << m << " e em segundos " << s << "\n";

    return 0;
}

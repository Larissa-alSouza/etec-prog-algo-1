/* 2- Solicitar a idade de várias pessoas e imprimir: Quantidade de pessoas com menos de 21 anos. Quantidade de pessoas com mais de 50 anos. O programa termina quando idade digitada for -99 */

#include <locale.h>
#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Portuguese");
    
    int idade, soma1 = 0, soma2 = 0;

    while (true) {
        
        cout << "Digite as idades (digite -99 para encerrar):\n";
            
        cin >> idade;

        if (idade == -99)
        {
            break;
        }
        
        if (idade < 21) 
        {
            soma1 += 1;
        } 
        else if(idade >= 50)
        {
            soma2 += 1;
        }
    }
    
        cout << "Menos 21: " << soma1 << "\n";
        cout << "Mais 50: " << soma2 << "\n";

    return 0;
}

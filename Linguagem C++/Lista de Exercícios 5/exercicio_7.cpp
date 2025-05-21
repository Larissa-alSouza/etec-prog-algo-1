#include <locale.h>
#include <iostream>
using namespace std;

main() 
{
	setlocale(LC_ALL, "Portuguese");
		    
    int num, soma = 0, count;
    float media = 0;

    for(num = 0; num <= 100; num++)
    {
    	count++;
    	soma +=num;
        printf("%d \n", num);
    }
    
    media = soma / count;
    cout << "A média dos valores de 0 a 100 é de: " << media << "\n";
    
}

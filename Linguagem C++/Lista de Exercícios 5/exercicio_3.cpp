#include <locale.h>
#include <iostream>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num, soma = 0, media = 0, count = 0;
	
	do
	{
		cout << "Insira um número inteiro: ";
		cin >> num;
		
		if(num % 3 == 0 && num != 0)
		{
			soma += num;
			
			count++;
		}
				
	}while(num != 0);
	
	media = soma / count;
	
	cout << "A média foi de: " << media << "\n";
}

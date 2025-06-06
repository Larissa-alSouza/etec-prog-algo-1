#include<iostream>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[10], i, soma = 0;
	
	for(i = 0; i < 10; i++)
	{
		cout << "Digite um número: ";
		cin >> vetor[i];
	}
	
	for(i = 0; i < 10; i++)
	{
		if(vetor[i] % 2 != 0)
		{
			soma += vetor[i];
		}
	}
	
	cout << soma;
}

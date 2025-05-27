#include<iostream>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float vetor[15];
	int count, positivo=0, negativo=0, nulo=0, i;
	
	for(i = 0; i < 15; i++)
	{
		cout << "Digite um número: ";
		cin >> vetor[i];
	}
	
	for(i = 0; i < 15; i++)
	{
		if(vetor[i] > 0)
		{
			positivo += 1;
		}
		else if(vetor[i] < 0)
		{
			negativo += 1;
		}
		else
		{
			nulo += 1;
		}
	}
	
	cout << "Positivos: " << positivo << "\n";
	cout << "Negativos: " << negativo << "\n";
	cout << "Nulos: " << nulo;
}

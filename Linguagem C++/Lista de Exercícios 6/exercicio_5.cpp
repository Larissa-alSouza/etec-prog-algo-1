#include<iostream>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float vetor[20];
	int i, x, y;
	
	for(i = 0; i < 20; i++)
	{
		cout << "Digite um número: ";
		cin >> vetor[i];
	}
	
	x = vetor[0];
	
	for(i = 0; i < 20; i++)
	{
		if(x < vetor[i])
		{
			x = vetor[i];
			y = i + 1;
		}
	}
	
	cout << "O maior valor é: " << x << "\n";
	cout << "E a sua posição é: " << y;
}

#include<iostream>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[20], i, vetores[20];
	
	for(i = 0; i < 20; i++)
	{
		cout << "Digite um número: ";
		cin >> vetor[i];
	}
	
	for(i = 0; i < 20; i++)
	{
		if(vetor[i] > 0)
		{
			vetores[i] = vetor[i] * 2;
		}
		else
		{
			vetores[i] = vetor[i] * (-1);
		}
		
		cout << vetores[i] << "\n";
	}
	
	system("pause");
}

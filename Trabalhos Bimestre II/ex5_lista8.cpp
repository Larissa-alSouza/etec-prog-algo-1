#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[10], x;
	int i;
	bool rep = false;
	
	cout << "Digite um número: ";
	cin >> x;
	
	vetor[0] = x;
	
	do
	{
		for(i = 0; i < 10; i++)
		{
			if(x == vetor[i])
			{
				cout << "Esse número já existe, digite outro: ";
				rep = true;
			}
			else
			{
				for(i = 0; i < 10; i++)
				{
					vetor[i] = x;
				}
			}
		}
		
	}while(rep == true);
	
	/*
	
	for(i = 0; i < 10; i++)
	{
		cout << "Digite um número: ";
		cin >> vetor[i];
		
		x = vetor[i];
	}
	
	for(i = 0; i < 10; i++)
	{
		if(x == vetor[i])
		{
			cout << "Esse número já existe, digite outro: ";
			rep = true;
		}
		else
		{
			vetor[i] = x;
		}
	}
	*/
	
}

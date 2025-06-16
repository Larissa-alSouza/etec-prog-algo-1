#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n, i, j, m;
	
	cout << "Digite um número: ";
	cin >> n;
	
	char nome[n][30];
	float altura[n], x;
	
	for(i = 0; i < n; i++)
	{
		cout << "Digite o nome: ";
		cin >> nome[i];
	}
	
	for(i = 0; i < n; i++)
	{
		cout << "Digite a altura da pessoa: ";
		cin >> altura[i];
	}
	
	x = altura[0];
	
	for(i = 1; i < n; i++)
	{
		
		if(altura[i] > x)
		{
			x = altura[i];
		}
	}
	
	for(i = 0; i < n; i++)
	{
		if(altura[i] == x)
		{
			m = i;
		}
	}
	
	cout << "A pessoa nais alta é: " << nome[m] << " que mede: " << altura[m];
	
}

#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int v[10], v1[10], v2[10], i, pares=0, impares=0;
	
	for(i = 0; i < 10; i++)
	{
		cout << "Digite um número: ";
		cin >> v[i];
	}
	
	for(i = 0; i < 10; i++)
	{
		if(v[i] % 2 == 0)
		{
			v2[pares] = v[i];
			pares++;
		}
		else
		{
			v1[impares] = v[i];
			impares++;
		}
	}
	
	for(i = 0; i < impares; i++)
	{
		cout << v1[i];
	}
	cout << " Foram usados: " << impares << " posições \n";
	
	for(i = 0; i < pares; i++)
	{
		cout << v2[i];
	}
	cout << " Foram usados: " << pares << " posições";
}

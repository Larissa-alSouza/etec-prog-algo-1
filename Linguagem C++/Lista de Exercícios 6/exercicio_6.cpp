#include<iostream>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int ano[10], idade[10], i, ano_atual;
	float media = 0, soma = 0;
	
	cout << "Em que ano estamos? ";
	cin >> ano_atual;
	
	for(i = 0; i < 10; i++)
	{
		cout << "Digite o ano do seu nascimento: ";
		cin >> ano[i];
	}
	
	for(i = 0; i < 10; i++)
	{
		idade[i] = ano_atual - ano[i];
		
	}
	
	for(i = 0; i < 10; i++)
	{
		cout << "Idade da pessoa " << (i + 1) << ": " << idade[i] << "\n";
		soma += idade[i];
		media = soma / 10;
	}
	
	cout << soma << "\n";
	cout << media;
	
}

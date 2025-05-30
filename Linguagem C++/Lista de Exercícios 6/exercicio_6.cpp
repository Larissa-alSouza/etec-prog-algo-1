#include<iostream>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char nome[10][30];
	int ano[10], idade[10], i, ano_atual, n;
	float media = 0, soma = 0;
	
	cout << "Em que ano estamos? ";
	cin >> ano_atual;
	
	do
	{
		cout << "Quantas pessoas serão inseridas? ";
		cin >> n;
	} while(n> 10);
	
	for(i = 0; i < n; i++)
	{
		fflush(stdin);
		cout << "Digite o nome da " << i+1 << " pessoa: ";
		gets(nome[i]);
		
		cout << "Digite o ano do nascimento de  " << nome[i] << ": ";
		cin >> ano[i];
	}
	
	for(i = 0; i < n; i++)
	{
		idade[i] = ano_atual - ano[i];
		
	}
	
	for(i = 0; i < n; i++)
	{
		cout << "Idade de " << nome[i] << ": " << idade[i] << "anos \n";
		soma += idade[i];
		media = soma / n;
	}
	
	cout << soma << "\n";
	cout << media;
	
}

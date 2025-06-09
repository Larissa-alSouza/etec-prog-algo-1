#include<iostream>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30];
	int i;
	
	cout << "Digite um nome: ";
	gets(nome);
	
	for(i = 0; i < nome[i]; i++)
	{
		if(nome[0] == 'a' || nome[0] == 'A')
		{
			cout << nome[i];
		}
	}
}

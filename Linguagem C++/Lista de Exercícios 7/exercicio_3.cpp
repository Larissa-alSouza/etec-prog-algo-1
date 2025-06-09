#include<iostream>
#include<locale.h>
using namespace std;

main()
{
	char nome[30];
	int i, count = 0;
	
	cout << "Digite um nome: ";
	gets(nome);
	
	for(i = 0; i < nome[i]; i++)
	{
		if(nome[i] == 'a' || nome[i] == 'A' || nome[i] == 'e' || nome[i] == 'E' || nome[i] == 'i' || nome[i] == 'I' || nome[i] == 'o' || nome[i] == 'O' || nome[i] == 'u' || nome[i] == 'U')
		{
			count++;
		}
	}
	
	cout << count;
}

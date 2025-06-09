#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char frase1[30], frase2[30];
	int i, tam1, tam2;
	bool iguais = true;
	
	cout << "Digite uma frase: ";
	gets(frase1);
	
	cout << "Digite outra frase: ";
	gets(frase2);
	
	tam1 = strlen(frase1);
	tam2 = strlen(frase2);
	
	if(tam1 == tam2)
	{
		for(i = 0; i < tam1; i++)
		{
			if(frase1[i] != frase2[i])
			{
				iguais = false;
			}
		}
		
		if(iguais == true)
		{
			cout << "Frases iguais!";
		}
		else
		{
			cout << "Frases diferentes!";
		}
	}
	else
	{
		cout << "Frases diferentes!";
	}
}

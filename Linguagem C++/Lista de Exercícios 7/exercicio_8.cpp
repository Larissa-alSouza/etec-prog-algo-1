#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char frase[50];
	int i, count=0, tam;
	
	cout << "Digite uma frase: ";
	gets(frase);
	
	tam = strlen(frase);
	
	for(i = 0; i < tam; i++)
	{
		if(frase[i] == ' ')
		{
			count++;
		}
	}
	
	cout << count;
}

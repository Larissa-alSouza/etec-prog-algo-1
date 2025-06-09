#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char frase[50];
	int i;
	
	cout << "Digite uma frase: ";
	gets(frase);
	
	for(i = 0; i < frase[i]; i++)
	{
		if(frase[i] == ',')
		{
			frase[i] = ';';
		}
		cout << frase[i];
	}
}

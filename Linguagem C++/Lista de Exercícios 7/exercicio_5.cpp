#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char frase[50];
	int i, va=0, ve=0, vi=0, vo=0, vu=0;
	
	cout << "Digite uma frase: ";
	gets(frase);
	
	for(i = 0; i < frase[i]; i++)
	{
		if(frase[i] == 'a' || frase[i] == 'A')
		{
			va++;
		}
		if(frase[i] == 'e' || frase[i] == 'E')
		{
			ve++;
		}
		if(frase[i] == 'i' || frase[i] == 'I')
		{
			vi++;
		}
		if(frase[i] == 'o' || frase[i] == 'O')
		{
			vo++;
		}
		if(frase[i] == 'u' || frase[i] == 'U')
		{
			vu++;
		}
	}
	
	cout << va << " Vogal(is) a \n";
	cout << ve << " Vogal(is) e \n";
	cout << vi << " Vogal(is) i \n";
	cout << vo << " Vogal(is) o \n";
	cout << vu << " Vogal(is) u";
}

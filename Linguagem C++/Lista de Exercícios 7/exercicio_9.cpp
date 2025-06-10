#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char frase[50], l1, l2;
	int i;
	
	cout << "Digite a frase: ";
	gets(frase);
	
	cout << "Qual letra você quer trocar? ";
	cin >> l1;
	
	cout << "Qual letra você quer colocar no lugar? ";
	cin >> l2;
	
	for(i = 0; i < frase[i]; i++)
	{
		if(frase[i] == l1)
		{
			frase[i] = l2;
		}
	}
	
	cout << frase;
}

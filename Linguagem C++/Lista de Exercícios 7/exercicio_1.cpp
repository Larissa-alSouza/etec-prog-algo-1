#include<iostream>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char frase[50];
	int count, i;
	
	cout << "Digite uma frase: ";
	gets(frase);
	
	for(i = 0; i < frase[i]; i++)
	{
		if(frase != "\0")
		{
			count++;
		}
	}
	
	cout << count;
}

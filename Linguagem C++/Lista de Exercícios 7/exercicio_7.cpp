#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char frase1[30], frase2[30];
	int i, j=0;
	
	cout << "Digite uma frase: ";
	gets(frase1);
	
	for(i = 0; i < frase1[i]; i++)
	{
		if(!(frase1[i] == 'a' || frase1[i] == 'A' || frase1[i] == 'e' || frase1[i] == 'E' || frase1[i] == 'i' || frase1[i] == 'I' || frase1[i] == 'o' || frase1[i] == 'O' || frase1[i] == 'u' || frase1[i] == 'U'))
		{
			frase2[j] = frase1[i];
			j++;
		}
		
		frase2[j] = '\0';
		
	}
	
	cout << frase2;
}

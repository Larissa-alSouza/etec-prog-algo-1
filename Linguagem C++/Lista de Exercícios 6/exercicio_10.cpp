#include<iostream>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int v1[5], v2[5], i;
	
	for(i = 0; i < 5; i++)
	{
		cout << "Digite um número: ";
		cin >> v1[i];
	}
	
	for(i = 4; i > -1; i--)
	{
		v2[i] = v1[i];
		
		cout << v2[i];
	}
}

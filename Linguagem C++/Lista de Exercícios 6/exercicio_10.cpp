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
	
	
	for(i = 0; i < 5; i++)
	{
	    v2[i] = v1[4 - i];
	    cout << "indice: " << i << " está com o valor: " << v2[i] << "\n";
	}
	
	
}

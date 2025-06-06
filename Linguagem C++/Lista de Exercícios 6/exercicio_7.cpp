#include<iostream>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int v1[5], v2[5], i, x;
	
	for(i = 0; i < 5; i++)
	{
		cout << "Digite um número: ";
		cin >> v1[i];
	}
	
	x = v1[0];
	
	for(i = 0; i < 5; i++)
	{
		if(x < v1[i])
		{
			x = v1[i];
		}
	}
	
	for(i = 0; i < 5; i++)
	{
		v2[i] = v1[i] * x;
		
		cout << v2[i];
	}
}

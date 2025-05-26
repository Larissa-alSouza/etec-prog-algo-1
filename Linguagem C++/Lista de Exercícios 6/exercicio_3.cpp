#include<iostream>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int v1[10], i, v2[10];
	
	
	for(i = 0; i < 10; i++)
	{
		do
		{
			cout << "Digite um número que seja positivo: ";
			cin 
			>> v1[i];
			
			if(v1[i] < 0)
			{
				cout << "Digite um número válido (POSITIVO)!!!!! ";
				cin >> v1[i];
			}
		}while(v1[i] < 0);
	}

	
	for(i = 0; i < 10; i++)
	{
		if(v1[i] % 2 == 0)
		{
			v2[i] = v1[i] * 2;
		}
		else
		{
			v2[i] = v1[i] * (-1);
		}
		
		cout << v2[i] << "\n";
	}
	
}

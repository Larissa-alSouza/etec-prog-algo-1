#include<iostream>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int val;
	float med, s = 0, c = 0;
	
	cout << "\t\t Somar e calcular a média de uma sequência de valores \n\n";
	
	cout << "Digite os valores inteiros, até que -99 seja digitado \n";
	
	do
	{
		cin >> val;
		
		if(val != -99)
		{
			c++;
			s += val;
		}
	}while(val != -99);
	
	med = s / c;
	
	cout << "\n\n\t A soma da sequência de valores é: "<< s << "\n";	
	cout << "\n\n\t A média dos valores lidos é: " << med << "\n";
}

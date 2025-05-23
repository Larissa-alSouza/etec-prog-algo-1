#include<iostream>
#include<conio.h>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int x[20], i, p, y, flag;
	float soma = 0, media = 0;
	
	cout << "Digite uma lista com 20 valores para calcular a média \n";
	
	for(i = 0; i < 20; i++)
	{
		cin >> x[i];
	}
	
	cout << "\n\n Lista de valores\n\n";
	system("cls");
	
	for(i = 0; i < 20; i++)
	{
		soma+= x[i];
		cout << x[i] << " ";
	}
	
	media = soma/20;
	cout<< "Média dos valores: " << media << "\n";
	
	cout << "Deseja verificar o valor de qual posição da lista: ";
	cin >> p;
	
	cout << "O valor escolhido da posição " << p << " é o valor " << x[p - 1] << "\n";
	
	flag = -1;
	cout << "Qual número deseja encontrar na lista: ";
	cin >> y;
	
	for(i = 0; i < 20; i++)
	{
		if(y == x[i])
		{
			flag = i;
			i = 19;
		}
	}
	
	if(flag != -1)
	{
		cout << "O valor " << y << " se encontra na posição " << flag + 1 << "\n";
	}
	else
	{
		cout << "O valor " << y << " não se encontra em nenhuma posição da lista \n\n";
	}
	
	system("pause");
}

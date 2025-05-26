#include<iostream>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float vetor[20];
	int i;
	
	for(i = 0; i < 20; i++)
	{
		cout << "Insira um número: ";
		cin >> vetor[i];
	}
	
	for(i = 0+1; i < 21; i++)
	{
		if(i % 2 == 0)
		{
			cout << vetor[i-1] << "\n";
		}
	}
}

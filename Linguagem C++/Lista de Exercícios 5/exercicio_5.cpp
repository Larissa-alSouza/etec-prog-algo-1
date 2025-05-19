#include <locale.h>
#include <iostream>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num, i;
	double fatorial=1;
	
	cout << "Insira um número para calcular seu fatorial: ";
	cin >> num;
	
	for(i = num; i > 1; i--)
	{
		fatorial *= i;
	}
	
	cout << "O fatorial de " << num << " é " << fatorial << "\n";
	system("pause");
}

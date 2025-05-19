#include <locale.h>
#include <iostream>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num, impares = 0, pares = 0;
	
	do
	{
		cout << "numero: ";
		cin >> num;
		
		if(num % 2 != 0)
		{
			impares++;
		}else
		{
			pares++;
		}
	}while(num > 0);
	

	
	cout << "impares: " << impares << "\n";
	cout << "pares: "<< pares << "\n";
}

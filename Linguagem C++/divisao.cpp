#include <locale.h>
#include <iostream>
using namespace std;

main()
{
	setlocale (LC_ALL, "Portuguese");
	
	float num1, num2, result;
	
	cout << "Digite o número que será dividido (dividendo): ";
	cin >> num1;
	
	cout << "Digite o número que dividirá (divisor): ";
	cin >> num2;
	
	result = num1 / num2;
	
	cout << "O resultado da divisão é de " << num1 << " por " << num2 << " e igual a " << result << "\n";
	
	system("pause");
}

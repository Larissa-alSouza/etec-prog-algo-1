#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n, i, j, x, k=0;
	bool existe;
	
	cout << "Digite um número: ";
	cin >> n;
	
	int vetor[n];
	int vetorNovo[n];
	
	for(i = 0; i < n; i++)
	{
		cout << "\nDigite um número para o vetor com " << n << " posições: ";
		cin >> vetor[i];
	}
	
	
	for(i = 0; i < n; i++)
	{
		x = vetor[i];
		existe = false;
			
		for(j = 0; j < k; j++)
		{
			if(vetorNovo[j] == x)
			{
				existe = true;
				break;
			}
		}
		
		if(!existe) {
            vetorNovo[k] = x;
            k++;
        }
	}
	
	for(i = 0; i < k; i++)
	{
	    cout << vetorNovo[i] << " ";
	}
}

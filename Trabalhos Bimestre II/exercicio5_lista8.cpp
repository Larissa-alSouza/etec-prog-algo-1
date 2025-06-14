#include<iostream>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[10], i, j, x;
	bool rep;
	
	for(i = 0; i < 10; i++)
	{
	    do
	    {
	        cout << "Digite um número: ";
	        cin >> x;
	        rep = false;
	        
	        for(j = 0; j < i; j++)
	        {
	            if(vetor[j] == x)
	            {
	                cout << "Esse número já existe nesse vetor, tente outro.";
	                rep = true;
	                break;
	            }
	        }
	    }while(rep);
	    
	    vetor[j] = x;
	}
	
	for(i = 0; i < 10; i++)
	{
	    cout << vetor[i];
	}
	
}

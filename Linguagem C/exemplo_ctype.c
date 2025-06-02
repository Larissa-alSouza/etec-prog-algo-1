#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	char letra;
	char op;
	
	printf("Digite uma letra do alfabeto: ");
	scanf("%c", &letra);
	
	if(isalpha(letra))
	{
		printf("Você digitou a letra %c \n\n", letra);
		
		letra = toupper(letra);
		printf("Maiúscula: %c \n", letra);
		
		letra = tolower(letra);
		printf("Minúscula: %c\n\n", letra);
	}
	else
	{
		printf("Você não digitou uma letra!");
	}
	
	printf("Digite um número de 0 a 9: ");
	fflush(stdin);
	scanf("%c", &op);
	
	if(isdigit(op))
	{
		printf("Digito: %c \n\n", op);
	}
	else
	{
		printf("Você não digitou um número! \n\n");
	}
	
	system("pause");
}

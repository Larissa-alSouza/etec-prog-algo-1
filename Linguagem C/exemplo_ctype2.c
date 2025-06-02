#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char op;
	
	printf("Aperte uma tecla do seu teclado: ");
	scanf("%c", &op);
	
	if(isalnum(op))
	{
		printf("Você digitou um caracter alfanumérico");
	}
	else
	{
		printf("Você não digitou um caracter alfanúmerico!")
	}
	
	if(isalpha(op))
	{
		printf("Você digitou uma letra do alfabeto");
	}
	else
	{
		printf("Você não digitou uma letra do alfabeto!")
	}
	
	if(iscntrl(op))
	{
		printf("Você digitou um caracter de controle");
	}
	else
	{
		printf("Você não digitou um caracter de controle!")
	}
	
	if(isdigit(op))
	{
		printf("Você digitou um digito decimal");
	}
	else
	{
		printf("Você não digitou um digito decimal!")
	}
	
	if(isgraph(op))
	{
		printf("Você digitou um caracter com representação gráfica");
	}
	else
	{
		printf("Você não digitou um caracter com representação gráfica!")
	}
	
	if(islower(op))
	{
		printf("Você digitou um caracter minúsculo");
	}
	else
	{
		printf("Você não digitou um caracter minúsculo!")
	}
	
	if(isupper(op))
	{
		printf("Você digitou um caracter maiúsculo");
	}
	else
	{
		printf("Você não digitou um caracter maiúsculo!")
	}
	
	if(isprint(op))
	{
		printf("Você digitou um caracter imprimível");
	}
	else
	{
		printf("Você não digitou um caracter imprimível!")
	}
	
	if(ispunct(op))
	{
		printf("Você digitou um ponto");
	}
	else
	{
		printf("Você não digitou um ponto!")
	}
	
	if(isspace(op))
	{
		printf("Você digitou um espaço em branco");
	}
	else
	{
		printf("Você não digitou um espaço em branco!")
	}
	
	if(isxdigit(op))
	{
		printf("Você digitou um dígito hexadecimal");
	}
	else
	{
		printf("Você não digitou um dígito hexadecimal!")
	}
}

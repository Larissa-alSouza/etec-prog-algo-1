<!-- LISTA DE EXERCÍCIOS I -->
<!-- 1. Faça um algoritmo que represente um valor pelo teclado e mostre como seu resultado seu dobro e a sua metade. -->

programa
{
	
	funcao inicio()
	{
		real num, dobro, metade

		escreva("Insira um número: ")
		leia(num)

		dobro = num * 2
		metade = num / 2

		escreva("O dobro do número ", num, " é: ", dobro, " e a metade é: ", metade)
	}
}

<!-- LISTA DE EXERCÍCIOS I -->

<!-- 
5. Escreva um algoritmo que leia três números inteiros e positivos (a, b, c) e calcule a seguinte expressão: d = (r + s) / 2
onde: r = (a + b) / c e s = (b + c) / a
-->

programa
{
	
	funcao inicio()
	{
		inteiro a, b, c, d, r, s

		escreva("Insira o primeiro número: ")
		leia(a)

		escreva("Insira o segundo número: ")
		leia(b)

		escreva("Insira o terceiro número: ")
		leia(c)

		r = (a + b) / c
		s = (b + c) / a
		d = (r + s) / 2

		escreva(d)
	}
}

<!-- LISTA DE EXERCÍCIOS I -->
<!-- 4. Ler o salário mensal atual de um funcionário e o aumento de salário. Calcular e escrever o valor do novo salário. -->

programa
{
	
	funcao inicio()
	{
		real sa, aumento, sn

		escreva("Qual o salário atual do funcionário? ")
		leia(sa)

		escreva("E qual o aumento do salário dele? ")
		leia(aumento)

		sn = sa + aumento

		escreva("O novo salário desse funcionário é: ", sn)
	}
}

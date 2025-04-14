<!-- 3. Calcular a idade de uma pessoa, a partir do seu ano de nscimento. Informar também seu nome e mostrar como resultadoo nome e a sua idade. -->

programa
{

	funcao inicio()
	{
		cadeia nome
		inteiro aa, an, i

		escreva("Digite o seu nome: ")
		leia(nome)
		escreva("Digite o ano atual: ")
		leia(aa)
		escreva("Digite o seu ano de nascimento: ")
		leia(an)

		i = aa - an

		escreva(nome, " tem ", i, " anos")
	}
}

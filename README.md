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

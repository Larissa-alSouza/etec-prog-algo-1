<!-- 2. Leia um número e mostre como seu resultado seu antecessor e seu sucessor. -->

programa
{
	
	funcao inicio()
	{
		inteiro num, a, s

		escreva("Insira um número: ")
		leia(num)

		a = num - 1
		s = num + 1

		escreva("O antecessor do número ", num, " é: ", a, " e o seu sucessor é: ", s)
	}
}

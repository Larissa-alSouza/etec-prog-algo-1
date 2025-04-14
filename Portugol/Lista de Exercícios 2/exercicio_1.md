<!-- 1. Ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário -->

programa
{
	
	funcao inicio()
	{
		real sf, pr, r, vr, ns

		escreva("Digite o salário atual do funcionário: ")
		leia(sf)
		escreva("Digite o percentual de reajuste: ")
		leia(pr)

		r = pr/100
		vr = r * sf
		ns = vr + sf

		escreva("O novo salário é ", ns)
	}
}

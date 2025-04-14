<!-- 3- Ler os valores para nome, peso e altura de uma pessoa e calcule o seu IMC (índice de
massa corpórea), pela fórmula IMC = peso / altura^2.

Escrever o nome da pessoa, seu imc e se o resultado do IMC for até 18, escrever “baixo peso” se
for maior que 18 e menor igual a 24, escrever “normal”, se for maior que 24, escrever ‘Obeso’. -->

programa 
{

  funcao inicio() 
  {
    
    cadeia nome
    real altura, peso, imc
    caracter op

    faca
    {
      escreva("Insira o seu nome: ")
      leia(nome)

      escreva("Insira a sua altura: ")
      leia(altura)

      escreva("Insira o seu peso: ")
      leia(peso)

      imc = peso / (altura * altura)

      se(imc <= 18)
      {
        escreva("Abaixo do peso \n")
      }
      senao se(imc > 18 e imc <= 24)
      {
        escreva("Normal \n")
      }
      senao
      {
        escreva("Obeso \n")
      }

      escreva("Digite 's' se deseja continuar: ")
      leia(op)

    }enquanto(op == 's')
  }
}

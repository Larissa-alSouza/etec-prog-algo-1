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

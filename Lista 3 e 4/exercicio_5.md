programa 
{

  funcao inicio() 
  {
    
    cadeia nome
    real n1, n2, n3, n4, media
    caracter op

    faca
    {
      escreva("Insira o nome do aluno: ")
      leia(nome)

      escreva("Insira primeira nota: ")
      leia(n1)

      escreva("Insira segunda nota: ")
      leia(n2)

      escreva("Insira terceira nota: ")
      leia(n3)

      escreva("Insira quarta nota: ")
      leia(n4)

      media = (n1 + n2 + n3 + n4) / 4

      se(media >= 8 e media <= 10)
      {
        escreva("A média de ", nome, " foi de: ", media, "\n")
        escreva("Classificação A")
      }
      senao se(media >= 7 e media <= 7.99)
      {
        escreva("A média de ", nome, " foi de: ", media, "\n")
        escreva("Classificação B")
      }
      senao se(media >= 5 e media <= 6.99)
      {
        escreva("A média de ", nome, " foi de: ", media, "\n")
        escreva("Classificação C")
      }
      senao
      {
        escreva("A média de ", nome, " foi de: ", media, "\n")
        escreva("Classificação D")
      }

      escreva("\nDeseja fazer outro cálculo de média? ")
      leia(op)

    } enquanto(op == 's')
  }
}

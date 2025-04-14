<!-- 1- São fornecidas as seguintes informações dos estudantes:
- nome do aluno
- 4 notas

Calcular a média e determinar a classificação de notas dos alunos:
Se média entre : 8 e 10, classificação “A”
Se média entre: 7 e 7,9, classificação “B” Se
média entre: 5 e 6,9, classificação “C” Se
média abaixo de 5, classificação “D”.

Mostrar como resultado:
-nome aluno
- média
- classificação -->

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

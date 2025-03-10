programa {
  funcao inicio() {
    
    cadeia nome
    real n1, n2, md
    caracter op

    faca
    {
      escreva("Insira o nome do(a) aluno(a): ")
      leia(nome)

      faca
      {
        escreva("Insira a primeira nota (0 a 10): ")
        leia(n1)
      } enquanto(n1 < 0 ou n1 > 10)

      faca
      {
        escreva("Insira a segunda nota (0 a 10): ")
        leia(n2)
      } enquanto(n2 < 0 ou n2 >10)

      md = (n1 + n2) / 2

      escreva("O(a) aluno(a) ", nome, " ficou com ", md, " de média\n\n")

      escreva("Deseja calcular outra média? Se sim digite s: ")
      leia(op)
      escreva("\n")
    } enquanto(op == 's')

    escreva("\n\n Programa encerrado!")
  }
}

programa 
{

  funcao inicio() 
  {
    
    cadeia nome
    real sf, vv, comissao, salFinal
    caracter op

    faca
    {
      escreva("Insira o nome do usuário: ")
      leia(nome)

      escreva("Insira o salário fixo do funcionário: ")
      leia(sf)

      escreva("Insira o valor de vendas que esse funcionário fez: ")
      leia(vv)

      se(vv <= 2000)
      {
        comissao = vv * 0.03
        salFinal = sf + comissao
        escreva("O funcionário ", nome, " Vai receber ", salFinal, " já incluso abono \n")
      }
      senao se(vv > 2000 e vv <= 5000)
      {
        comissao = vv * 0.05
        salFinal = sf + comissao
        escreva("O funcionário ", nome, " Vai receber ", salFinal, " já incluso abono \n")
      }
      senao se(vv > 5000)
      {
        comissao = vv * 0.10
        salFinal = sf + comissao
        escreva("O funcionário ", nome, " Vai receber ", salFinal, " já incluso abono \n")
      }

      escreva("Deseja continuar? 's' ou 'n' \n")
      leia(op)

    }enquanto(op == 's')
  }
}

<!-- 4- Ler onome, o salário fixo e o valor das vendas efetuadas pelo vendedor de uma loja.
Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R$ 2.000,00,
5% sobre vendas acima de R$ 2.000,00 e R$ 5.000,00 e 10% para vendas acima de R$
5000,00, calcular e escrever o seu nome e o salário com abono. -->

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

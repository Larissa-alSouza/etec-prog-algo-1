<!-- 2- Ler a descrição do produto (nome), a quantidade adquirida e o preço unitário. Calcular e
escrever o total a pagar

Onde: total = quantidade adquirida * preço unitário
total a pagar = total – desconto
o desconto será calculado, sabendo-se que:
- Se quantidade <= 20 o desconto será de 2%
- Se quantidade > 20 o desconto será de 5%

OBS: quantidade máxima permitida é 50 (não aceitar valores superiores). -->

programa 
{

  funcao inicio() 
  {
    
    real qnt, pu, total, tp, desconto
    cadeia nome
    caracter op

    faca
    {
      escreva("Insira o nome do produto: ")
      leia(nome)

      faca
      {
        escreva("Insira a quantidade de produtos: ")
        leia(qnt)

        se(qnt >= 50)
        {
          escreva("Não são permitidas quantidades acima de 50 \n")
          escreva("Tente novamente \n")
        }
      } enquanto(qnt >= 50)

      escreva("Insira o preço unitário: ")
      leia(pu)

      total = qnt * pu

      se(qnt <= 20)
      {
        desconto = 0.02
        tp = total - desconto
        escreva("O valor final é de: ", tp, "\n")
      }
      senao
      {
        desconto = 0.05
        tp = total - desconto
        escreva("O valor final é de: ", tp, "\n")
      }

      escreva("Digite 's' se deseja continar: ")
      leia(op)
    }enquanto(op == 's')
  }
}

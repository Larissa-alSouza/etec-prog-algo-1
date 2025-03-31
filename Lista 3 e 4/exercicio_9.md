programa 
{

  funcao inicio() 
  {
    
    cadeia nome_prod, form_pag
    real preco, qnt, valor, novo_valor, porc, novo_valor2
    inteiro parcela
    caracter x, op

    faca
    {
      escreva("Insira o nome do produto: ")
      leia(nome_prod)

      escreva("Insira o preço do produto: ")
      leia(preco)

      escreva("Insira a quantidade a ser comprada: ")
      leia(qnt)

      escreva("Insira a forma de pagamento: ")
      leia(form_pag)

      escreva("Pagamento à vista? s ou n? ")
      leia(x)

      valor = preco * qnt

      se(x == 's')
      {
        porc = valor * 0.15
        novo_valor = valor - porc
        escreva("O produto ", nome_prod, " ficou por ", novo_valor, "\n")
      }
      senao
      {
        escreva("Em quantas vezes irá parcelar? ")
        leia(parcela)

        se(parcela <= 5)
        {
          novo_valor = valor / parcela
          escreva("O produto ", nome_prod, " ficou por ", valor, " e ", novo_valor, " em ", parcela, " parcelas \n")
        }
        senao
        {
          porc = valor * 0.10
          novo_valor = valor + porc
          novo_valor2 = novo_valor / parcela
          escreva("O produto ", nome_prod, " ficou por ", novo_valor, " e ", novo_valor2, " em ", parcela, " parcelas \n")
        }
      }

      escreva("Deseja continuar? s ou n? ")
      leia(op)

    }enquanto(op == "s") 
  }
}

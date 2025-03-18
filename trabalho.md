programa {
  funcao inicio() {
    
    cadeia nome
    inteiro ano_atual, mes_atual, ano_nasc, mes_nasc, ano_entrada, mes_entrada, i_anos, i_meses, tempo_trab_anos, tempo_trab_meses

    escreva("Insira o ano atual: ")
    leia(ano_atual)

    escreva("Insira o mês atual: ")
    leia(mes_atual)

    escreva("Insira o nome do funcionário: ")
    leia(nome)

    escreva("Insira o ano de nascimento desse funcionário: ")
    leia(ano_nasc)

    escreva("Insira o mês em que esse funcionário nasceu: ")
    leia(mes_nasc)

    escreva("Insira o ano que esse funcionário entrou na empresa: ")
    leia(ano_entrada)

    escreva("Insira o mês que esse funcionário entrou na empresa: ")
    leia(mes_entrada)

    i_anos = ano_atual - ano_nasc
    i_meses = mes_atual - mes_nasc

    se(i_meses < 0)
    {
      i_anos = i_anos - 1
      i_meses = i_meses + 12
    }

    escreva("O funcionário ", nome, " tem ", i_anos, " anos e ", i_meses, " meses \n")

    tempo_trab_anos = ano_atual - ano_entrada
    tempo_trab_meses = mes_atual - mes_entrada

    se(tempo_trab_meses < 0)
    {
      tempo_trab_anos = tempo_trab_anos - 1
      tempo_trab_meses = tempo_trab_meses + 12
    }

    escreva("O funcionário ", nome, " tem ", tempo_trab_anos, " anos e ", tempo_trab_meses, " meses de tempo trabalhado\n")

    se((i_anos >= 65 ou (tempo_trab_anos >= 30)) ou i_anos >= 60 e tempo_trab_anos >= 25)
    {
      escreva("Requer aposentadoria")
    }
    senao
    {
      escreva("Não requerer aposentadoria")
    }
  }
}

programa {
  funcao inicio() {
    
    cadeia nome
    real ano_atual, mes_atual, ano_nasc, mes_nasc, ano_emp, mes_emp, idade, a, temp_trab, b

    escreva("Insira o nome do funcionário: ")
    leia(nome)

    escreva("Insira o ano atual: ")
    leia(ano_atual)

    escreva("Insira o mês atual: ")
    leia(mes_atual)

    escreva("Insira o ano de nascimento desse funcionário: ")
    leia(ano_nasc)

    escreva("Insira o mês de nascimento desse funcionário: ")
    leia(mes_nasc)

    escreva("Insira o ano de ingresso desse funcionário na empresa: ")
    leia(ano_emp)

    escreva("Insira o mês de ingresso desse funcionário na empresa: ")
    leia(mes_emp)

    a = mes_atual - mes_nasc

    se(a <= mes_atual)
    {
      idade = ano_atual - ano_nasc
    }
  }
}

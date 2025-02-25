programa {

  funcao inicio() 
  {

    real a, m, d, as, ms, result

    escreva("Insira os anos: ")
    leia(a)
    escreva("Insira os meses: ")
    leia(m)
    escreva("Insira os dias: ")
    leia(d)

    as = a * 365
    ms = m * 30
    result = as + ms + d

    escreva(result)
  }
  
}

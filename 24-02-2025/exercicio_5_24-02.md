programa {
  funcao inicio() 
{

    real cf, im, ld, pf

    escreva("Insira o custo de fabricação do carro: ")
    leia(cf)

    im = cf * 0.45
    ld = cf * 0.12
    pf = cf + im + ld

    escreva("O preço final do carro é de: ", pf, " O valor de impostos é de: ", im, " e o lucro do distribuidor é de: ", ld)
  }
}

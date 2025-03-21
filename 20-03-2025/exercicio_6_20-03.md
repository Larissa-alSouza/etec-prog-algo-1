programa 
{
  funcao inicio() 
  {
  
    real sa, ab, sn
    inteiro c, c2

    escreva("Digite um número: ")
    leia(c2)

    para(c = 1; c <= c2; c++)
    {
      escreva("Salário: ")
      leia(sa)

      escreva("Abono: ")
      leia(ab)

      sn = sa + ab

      escreva("Salário novo = ", sn, "\n")
    }
  }
}

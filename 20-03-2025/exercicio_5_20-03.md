programa 
{
  funcao inicio() 
  {
  
    real sa, ab, sn
    inteiro c

    para(c = 1; c <= 10; c++)
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

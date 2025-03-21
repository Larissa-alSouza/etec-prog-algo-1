programa 
{
  funcao inicio() 
  {
  
    real sa, ab, sn
    caracter x

    faca
    {
      escreva("Salário: ")
      leia(sa)

      escreva("Abono: ")
      leia(ab)

      sn = sa + ab

      escreva("Salário novo = ", sn, "\n")
      escreva("Digite ! p/ novo cálculo: ")
      leia(x)
    }enquanto(x == '!')

  }
}

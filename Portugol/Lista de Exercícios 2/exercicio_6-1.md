<!-- 6.1. Para ler três números reais do teclado e verificar se o primeiro é maior que a soma dos outros dois. -->

programa 
{

  funcao inicio() 
  {

    real x, y, z, r

    escreva("Insira o primeiro número: ")
    leia(x)

    escreva("Insira o segundo número: ")
    leia(y)

    escreva("Insira o terceiro número: ")
    leia(z)

    r = y + z

    se(x > r)
    {
      escreva("O primeiro valor é maior que a soma do segundo e terceiro valor.")
    }
    senao
    {
      escreva("O primeiro valor não é maior que a soma do segundo e terceiro valor.")
    }
  }
}

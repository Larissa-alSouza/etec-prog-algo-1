<!-- LISTA DE EXERCÍCIOS II -->
<!-- 6.2. Para ler três números reais do teclado e verificar se o primeiro é maior que a soma dos outros dois. -->

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

    se(x > y + z)
    {
      escreva("O primeiro número é maior que a soma do segundo e terceiro números.")
    }
    senao se(x < y + z)
    {
      escreva("O primeiro número é menor que a soma do segundo e terceiro números.")
    }
    senao
    {
      escreva("O primeiro número é igual a soma do segundo e terceiro números.")
    }
  }
}

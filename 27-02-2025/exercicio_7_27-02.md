<!-- LISTA DE EXERCÍCIOS II -->
<!-- 7. Ler três valores e determinar o maior dentre eles. -->

programa 
{

  funcao inicio() 
  {

    real x, y, z

    escreva("Insira o primeiro número: ")
    leia(x)

    escreva("Insira o segundo número: ")
    leia(y)

    escreva("Insira o terceiro número: ")
    leia(z)

    se(x > y e x > z)
    {
      escreva("O primeiro número é maior")
    }
    senao se(x < y e y > z)
    {
      escreva("O segundo número é maior")
    }
    senao se(x < y e y < z)
    {
      escreva("O terceiro número é maior")
    }
  }
}

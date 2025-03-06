<!-- LISTA DE EXERCÍCIOS II -->
<!-- 8. Ler quatro números inteiros e calcular a soma dos que forem par. -->

programa 
{

  funcao inicio() 
  {

    inteiro a, b, c, d, p

    escreva("Insira o primeiro número: ")
    leia(a)

    escreva("Insira o segundo número: ")
    leia(b)

    escreva("Insira o terceiro número: ")
    leia(c)

    escreva("Insira o quarto número: ")
    leia(d)

    p = 0

    se(a % 2 == 0)
    {
      p = p + a
    }
    se(b % 2 == 0)
    {
      p = p + b
    }
    se(c % 2 == 0)
    {
      p = p + c
    }
    se(d % 2 == 0)
    {
      p = p + d
    }

    escreva(p)
  }
}

<!-- LISTA DE EXERCÍCIOS II -->
<!-- 9. Que informe se um dado ano é bissexto ou não bissexto. OBS: um ano é bissexto se ele for divisível por 400 ou por 4 e não for divisível por 100. -->

programa 
{

  funcao inicio() 
  {

    inteiro ano

    escreva("Qual ano você gostaria  de verificar? ")
    leia(ano)

    se(ano % 4 == 0 e ano % 100 != 0)
    {
      escreva("O ano de ", ano, ", é bissexto!")
    }
    senao
    {
      escreva("O ano de ", ano, ", não é bissexto!")
    }
  }
}

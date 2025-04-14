<!-- 2- Gerar e mostrar os valores ímpares até 500 -->

programa 
{

  funcao inicio() 
  {
    
    inteiro num

    para(num = 0; num <= 500; num++)
    {
      se(num % 2 != 0)
      {
        escreva(num, "\n")
      }
    }
  }
}

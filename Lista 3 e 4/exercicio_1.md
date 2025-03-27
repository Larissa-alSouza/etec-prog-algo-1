//1- Gerar e mostrar os números múltiplos de 3 até 300

programa 
{

  funcao inicio() 
  {
    
    inteiro num

    para(num = 0; num <= 300; num++)
    {
      se(num % 3 == 0)
      {
        escreva(num, "\n")
      }
    }
  }
}

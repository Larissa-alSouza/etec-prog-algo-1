<!-- 4- Gerar a tabuada de um valor solicitado pelo usuário e verificar se ele deseja novo cálculo de tabuada -->

programa 
{

  funcao inicio() 
  {
    
    inteiro num, i, tab

    escreva("Insira um número: ")
    leia(num)
    escreva("\n")

    para(i  = 0; i <= 10; i++)
    {
      tab = num * i
        escreva(num, " X ", i, " = ", tab, "\n")
    }
  }
}

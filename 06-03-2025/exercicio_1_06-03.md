programa 
{

  funcao inicio() 
  {
    real sb, gr, sbr, ir, sl

    escreva("Insira o salário base: ")
    leia(sb)

    escreva("Insira a gratificação: ")
    leia(gr)

    sbr = sb + gr

    se(sbr < 1000)
    {
      ir = sbr * 0.15
    } 
    senao
    {
      ir = sbr * 0.20
    }

    sl = sbr - ir

    escreva("O salário liquido é: ", sl)
  }
}

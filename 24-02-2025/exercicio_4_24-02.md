programa {
  funcao inicio() 
{

    inteiro de, h, m, s, x

    escreva("insira a duração do evento em segundos: ")
    leia(de)

    h = de / 3600
    x = de % 3600
    m = x / 60
    s = x % 60

    escreva("O total em horas foi: ", h, " em minutos: ", m, " e em segundos: ", s)
  }
}

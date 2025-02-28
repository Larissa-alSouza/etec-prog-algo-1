programa
{
    funcao inicio()
    {
        real carro, vm, result

        escreva("Qual era a velocidade do motorista? ")
        leia(carro)

        escreva("Qual era a velocidade máxima da via? ")
        leia(vm)

        result = carro - vm

        se(result > 0 e result <= 10)
        {
            escreva("A multa será de R$ 50,00")
        }
        senao se(result > 10 e result <= 30)
        {
            escreva("A multa será de R$ 100,00")
        }
        senao se(result > 30)
        {
            escreva("A multa será de R$ 200,00")
        }
        senao
        {
            escreva("Não terá multa!")
        }
    }
}

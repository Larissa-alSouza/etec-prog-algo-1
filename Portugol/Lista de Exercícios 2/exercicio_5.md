<!-- 5. Leia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista estava dirigindo nela e calcule a multa que uma pessoa vai receber, sabendo que são pagos:
a) 50 reais, se o motorista ultrapassar em até 10km/h a velocidade permitida (ex: velocidade máxima: 50km/h; motorista  60km/h ou a 56km/h);
b) 100 reais, se o motorista ultrapassar de 11 a 30km/h a velocidade permitida;
c) 200 reais, se estiver acima de 31km/h da velocidade permitida. -->

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

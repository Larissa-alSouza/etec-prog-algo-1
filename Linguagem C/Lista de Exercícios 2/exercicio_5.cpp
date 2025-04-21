/* 5- Leia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista estava dirigindo nela e calcule a multa que uma pessoa vai receber, sabendo que são pagos:
a) 50 reais, se o motorista ultrapassar em até 10km/h a velocidade permitida (ex: velocidade máxima: 50km/h; motorista  60km/h ou a 56km/h);
b) 100 reais, se o motorista ultrapassar de 11 a 30km/h a velocidade permitida;
c) 200 reais, se estiver acima de 31km/h da velocidade permitida. */

#include <stdio.h>

int main() {
    
    float carro, vm, result;
    
    printf("Qual era a velocidade do motorista? ");
    scanf("%f", &carro);
    
    printf("Qual era a  velocidade máxima da via? ");
    scanf("%f", &vm);
    
    result = carro - vm;
    
    if(result > 0 && result <= 10)
    {
        printf("A multa será de R$ 50,00");
    }
    else if(result > 10 && result <= 30)
    {
        printf("A multa será de R$ 100,00");
    }
    else if(result > 30)
    {
        printf("A multa será de R$ 200,00");
    }
    else
    {
        printf("Não terá multa!");
    }

    return 0;
}

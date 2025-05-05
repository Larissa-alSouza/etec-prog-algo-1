/* 1- Ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário */

#include <stdio.h>

int main() {
    
    float sf, pr, r, vr, ns;
    
    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &sf);
    
    printf("Digite o perentual de reajuste: ");
    scanf("%f", &pr);
    
    r = pr / 100;
    vr = r * sf;
    ns = vr + sf;
    
    printf("O novo salário e %.2f", ns);

    return 0;
}

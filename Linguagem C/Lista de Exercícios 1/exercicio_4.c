/* 4- Ler o salário mensal atual de um funcionário e o aumento de salário. Calcular e escrevaet o valor do novo salário. */

#include <stdio.h>

int main() {
    
    float salario, aumento, novo;
    
    printf("Insira o salário do funcionário: ");
    scanf("%f", &salario);
    
    printf("Insira o aumento que esse funcionário irá receber: ");
    scanf("%f", &aumento);
    
    novo = salario + aumento;
    
    printf("O salário novo é: %.2f", novo);

    return 0;
}

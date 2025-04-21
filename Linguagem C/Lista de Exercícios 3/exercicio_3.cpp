/* 3- Ler os valores para nome, peso e altura de uma pessoa e calcule o seu IMC (índice de
massa corpórea), pela fórmula IMC = peso / altura^2.

Escrever o nome da pessoa, seu imc e se o resultado do IMC for até 18, escrever “baixo peso” se
for maior que 18 e menor igual a 24, escrever “normal”, se for maior que 24, escrever ‘Obeso’. */

#include <stdio.h>

int main() {
    
    char nome[30], op;
    float altura, peso, imc;

    do
    {
      printf("Insira o seu nome: ");
      scanf("%s", &nome);

      printf("Insira a sua altura: ");
      scanf("%f", &altura);

      printf("Insira o seu peso: ");
      scanf("%f", &peso);

      imc = peso / (altura * altura);

      if(imc <= 18)
      {
        printf("Abaixo do peso \n");
      }
      else if(imc > 18 && imc <= 24)
      {
        printf("Normal \n");
      }
      else
      {
        printf("Obeso \n");
      }

      printf("Digite 's' se deseja continuar: ");
      scanf(" %c", &op);

    } while(op == 's');

    return 0;
}

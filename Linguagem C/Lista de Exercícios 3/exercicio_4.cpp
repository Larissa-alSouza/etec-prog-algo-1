/*  4- Ler onome, o salário fixo e o valor das vendas efetuadas pelo vendedor de uma loja.
Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R$ 2.000,00,
5% sobre vendas acima de R$ 2.000,00 e R$ 5.000,00 e 10% para vendas acima de R$
5000,00, calcular e escrever o seu nome e o salário com abono. */

#include <stdio.h>

int main() {
    
    char nome[30], op;
    float sf, vv, comissao, salFinal;

    do
    {
      printf("Insira o nome do usuário: ");
      scanf("%s", &nome);

      printf("Insira o salário fixo do funcionário: ");
      scanf("%f", &sf);

      printf("Insira o valor de vendas que esse funcionário fez: ");
      scanf("%f", &vv);

      if(vv <= 2000)
      {
        comissao = vv * 0.03;
        salFinal = sf + comissao;
        printf("O funcionário %s, vai receber %.2f, já incluso abono \n", nome, salFinal);
      }
      else if(vv > 2000 && vv <= 5000)
      {
        comissao = vv * 0.05;
        salFinal = sf + comissao;
        printf("O funcionário %s, vai receber %.2f, já incluso abono \n", nome, salFinal);
      }
      else if(vv > 5000)
      {
        comissao = vv * 0.10;
        salFinal = sf + comissao;
        printf("O funcionário %s, vai receber %.2f, já incluso abono \n", nome, salFinal);
      }

      printf("Deseja continuar? 's' ou 'n' \n");
      scanf(" %c", &op);

    } while(op == 's');

    return 0;
}

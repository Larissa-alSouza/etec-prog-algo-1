/* 2- Ler a descrição do produto (nome), a quantidade adquirida e o preço unitário. Calcular e
escrever o total a pagar

Onde: total = quantidade adquirida * preço unitário
total a pagar = total – desconto
o desconto será calculado, sabendo-se que:
- Se quantidade <= 20 o desconto será de 2%
- Se quantidade > 20 o desconto será de 5%

OBS: quantidade máxima permitida é 50 (não aceitar valores superiores). */

#include <stdio.h>

int main() {
    
    float qnt, pu, total, tp, desconto;
    char nome[30], op;

    do
    {
      printf("Insira o nome do produto: ");
      scanf("%s", &nome);

      do
      {
        printf("Insira a quantidade de produtos: ");
        scanf("%f", &qnt);

        if(qnt >= 50)
        {
          printf("Não são permitidas quantidades acima de 50 \n");
          printf("Tente novamente \n");
        }
        
      } while(qnt >= 50);

      printf("Insira o preço unitário: ");
      scanf("%f", &pu);

      total = qnt * pu;

      if(qnt <= 20)
      {
        desconto = 0.02;
        tp = total - desconto;
        printf("O valor final é de: %.2f \n", tp);
      }
      else
      {
        desconto = 0.05;
        tp = total - desconto;
        printf("O valor final é de: %.2f \n", tp);
      }

      printf("Digite 's' se deseja continar: ");
      scanf(" %c", &op);
      
    } while(op == 's');

    return 0;
}

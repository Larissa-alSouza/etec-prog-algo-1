/*  5- A loja Saldão está vendendo seus produtos com desconto de 15% para pagamento à vista,
em até 5x sem acréscimo e com juros de 10% para pagamentos com mais de 5 prestações.
São fornecidos: o nome do produto, seu preço e a quantidade a ser comprada. O usuário
deverá escolher a forma de pagamento. Mostrar como resultado: o nome do produto, o
valor final da compra e o valor da prestação (ou valor final se for à vista). */

#include <stdio.h>

int main() {
    
    char nome_prod[30], form_pag[30], x, op;
    float preco, qnt, valor, novo_valor, porc, novo_valor2;
    int parcela;

    do
    {
      printf("Insira o nome do produto: ");
      scanf("%s", &nome_prod);

      printf("Insira o preço do produto: ");
      scanf("%f", &preco);

      printf("Insira a quantidade a ser comprada: ");
      scanf("%f", &qnt);

      printf("Insira a forma de pagamento: ");
      scanf("%s", &form_pag);

      printf("Pagamento à vista? s ou n? ");
      scanf(" %c", &x);

      valor = preco * qnt;

      if(x == 's')
      {
        porc = valor * 0.15;
        novo_valor = valor - porc;
        printf("O produto: %s ficou por %.2f \n", nome_prod, novo_valor);
      }
      else
      {
        printf("Em quantas vezes irá parcelar? ");
        scanf("%d", &parcela);

        if(parcela <= 5)
        {
          novo_valor = valor / parcela;
          printf("O produto %s ficou por %.2f e %.2f em %d parcelas \n", nome_prod, valor, novo_valor, parcela);
        }
        else
        {
          porc = valor * 0.10;
          novo_valor = valor + porc;
          novo_valor2 = novo_valor / parcela;
          printf("O produto %s ficou por %.2f e %.2f em %d parcelas \n", nome_prod, novo_valor, novo_valor2, parcela);
        }
      }

      printf("Deseja continuar? s ou n? ");
      scanf(" %c", &op);

    } while(op == 's');
    
    return 0;
}

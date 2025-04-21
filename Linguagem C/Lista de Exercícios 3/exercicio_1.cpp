/* 1- São fornecidas as seguintes informações dos estudantes:
- nome do aluno
- 4 notas

Calcular a média e determinar a classificação de notas dos alunos:
Se média entre : 8 e 10, classificação “A”
Se média entre: 7 e 7,9, classificação “B” Se
média entre: 5 e 6,9, classificação “C” Se
média abaixo de 5, classificação “D”.

Mostrar como resultado:
-nome aluno
- média
- classificação */

#include <stdio.h>

int main() {
    
    char nome[30], op;
    float n1, n2, n3, n4, media;

    do
    {
      printf("Insira o nome do aluno: ");
      scanf("%s", &nome);

      printf("Insira primeira nota: ");
      scanf("%f", &n1);

      printf("Insira segunda nota: ");
      scanf("%f", &n2);

      printf("Insira terceira nota: ");
      scanf("%f", &n3);

      printf("Insira quarta nota: ");
      scanf("%f", &n4);

      media = (n1 + n2 + n3 + n4) / 4;

      if(media >= 8 && media <= 10)
      {
        printf("A média de %s, foi de: %.2f \n", nome, media);
        printf("Classificação A");
      }
      else if(media >= 7 && media <= 7.99)
      {
        printf("A média de %s, foi de: %.2f \n", nome, media);
        printf("Classificação B");
      }
      else if(media >= 5 && media <= 6.99)
      {
        printf("A média de %s, foi de: %.2f \n", nome, media);
        printf("Classificação C");
      }
      else
      {
        printf("A média de %s, foi de: %.2.2f \n", nome, media);
        printf("Classificação D");
      }

      printf("\nDeseja fazer outro cálculo de média? ");
      scanf(" %c", &op);

    } while(op == 's');

    return 0;
}

/*  1- Gerar e mostrar os números múltiplos de 3 até 300 */

#include <stdio.h>

int main() {
    
    int num;

    for(num = 0; num <= 300; num++)
    {
      if(num % 3 == 0)
      {
        printf("%d \n", num);
      }
    }
    
    return 0;
}

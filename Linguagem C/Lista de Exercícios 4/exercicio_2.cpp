/*  2- Gerar e mostrar os valores ímpares até 500 */

#include <stdio.h>

int main() {
    
    int num;

    for(num = 0; num <= 500; num++)
    {
      if(num % 2 != 0)
      {
        printf("%d \n", num);
      }
    }
    
    return 0;
}

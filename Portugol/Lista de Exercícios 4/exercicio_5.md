<!-- 5- A série de Fibonacci é uma sequência de termos que tem como os 2
primeiros termos, respectivamente, os números 1 e 1. A partir daí, os
demais termos são formados seguindo uma certa regra. A série de
Fibonacci pode ser vista a seguir:
1 1 2 3 5 8 13 21... -->

programa {
  funcao inicio() {

    inteiro n, i, a = 0, b = 1, c

    escreva("Quantos termos da sequência de Fibonacci você quer ver? ")
    leia(n)

    escreva("Sequência de Fibonacci:\n")

    para(i = 1; i <= n; i++) 
    {
        escreva(a)
        c = a + b
        a = b
        b = c
    }
    
  }
  
}

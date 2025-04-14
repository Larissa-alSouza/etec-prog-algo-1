<!-- 4. Que gere o preço de um carro ao consumidor e os valores pagos pelo imposto e pelo lucro  do distribuidor, sabendo o custo de fábrica do carro e que são pagos:
a) de imposto: 45% sobre o custo do carro;
b) de lucro do distribuidor: 12% sobre o custo do carro. -->

programa 
{

    funcao inicio() 
    {
  
        real cf, im, ld, pf
    
        escreva("Insira o custo de fabricação do carro: ")
        leia(cf)
    
        im = cf * 0.45
        ld = cf * 0.12
        pf = cf + im + ld
    
        escreva("O preço final do carro é de: ", pf, " O valor de impostos é de: ", im, " e o lucro do distribuidor é de: ", ld)
        
    }
    
}

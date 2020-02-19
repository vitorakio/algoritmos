algoritmo "EX26"


var
moeda1, moeda5, moeda10, moeda25, moeda50, moeda1real, total : real


inicio
escreval ("Quant de moedas de 1 centavo")
leia(moeda1)
escreval("Quant de moedas de 5 centavos")
leia(moeda5)
escreval ("Quant de moedas de 10 centavos")
leia(moeda10)
escreval("Quant de moedas de 25 centavos")
leia(moeda25)
escreval ("Quant de moedas de 50 centavos")
leia(moeda50)
escreval("Quant de moedas de 1 real")
leia(moeda1real)
      
      
moeda1  <- moeda1 * 0.01
moeda5  <- moeda5 * 0.05
moeda10 <- moeda10* 0.10
moeda25 <- moeda25* 0.25
moeda50 <- moeda50* 0.50
totalmoedas <- moeda1 + moeda5 + moeda10 + moeda25 + moeda50 + moeda1real
escreval("Economia de Pedrinho: R$ ", total)
fimalgoritmo

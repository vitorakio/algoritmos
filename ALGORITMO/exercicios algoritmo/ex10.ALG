Algoritmo "semnome"

Var saldo, saque, total: real



Inicio
escreval("Informe o salário do trabalhador:")
leia(saldo)
escreval("Informe o valor do primeiro saque")
leia(saque)
saldo <- (saque+(saque*0.038))
escreval("O saldo atual do trabalhor é de: R$", saldo)
escreval("Informe o valor do segundo saque")
leia(saque)
saldo <- (saque+(saque*0.038))
escreval("O saldo atual do trabalhador é de: R$", saldo)
Fimalgoritmo
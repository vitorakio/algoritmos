algoritmo "semnome"
// Função :
// Autor :
// Data : 28/04/2016
// Seção de Declarações 
var
  n, x, soma, cont, par : inteiro
inicio

escreval ("informe um numero x")
leia (x)

n <- 0
cont <- 1
soma <- 0

para soma <- 1 ate x faca
escreval ("Num ", cont)
cont <- cont + 1
leia (n)
     se n mod 2 = 0 entao
     n <- n + cont

fimse
fimpara

escreval (soma)
fimalgoritmo

algoritmo "ex11"
var
notas, qtde: vetor[1..7] de inteiro
i, valor_a_sacar, valor: inteiro
inicio
escreval("Insira o valor que deseja sacar")
notas[1] <- 100
notas[2] <- 50
notas[3] <- 20
notas[4] <- 10
notas[5] <- 5
notas[6] <- 2
notas[7] <- 1
leia (valor_a_sacar)
se (valor_a_sacar > 0) entao
valor <- valor_a_sacar
para i de 1 ate 7 faca
qtde[i] <- valor \ notas[i]
valor <-valor % notas[i]
fimpara
para i de 1 ate 7 faca
se (qtde[i] > 0) entao
escreval (qtde[i], " notas de ", notas[i])
fimse
fimpara
senao
escreval("Valor precisa ser maior que zero")
fimse
fimalgoritmo
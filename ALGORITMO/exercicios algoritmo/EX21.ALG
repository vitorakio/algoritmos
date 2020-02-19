Algoritmo "ex21"

Var saque, bit50, bit10, bit5, bit2: inteiro



Inicio

escreval ("Informe o valor do saque")
leia (saque)

bit50 <- saque div 50
saque <- saque mod 50
bit10 <- saque div 10
saque <- saque mod 10
bit5  <- saque div 5
saque <- saque mod 5
bit2  <- saque div 2
saque <- saque mod 2

escreval ("Nota(S) de 50: ", bit50)
escreval ("Nota(S) de 10: ", bit10)
escreval ("Nota(S) de 5: ", bit5)
escreval ("Nota(S) de 2: ", bit2)



Fimalgoritmo
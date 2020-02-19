Algoritmo "semnome"

Var quilowatts_cons, quilowatts, valor_pago, valor_total: real

Inicio

escreval("Informe a quantidade de quilowatts")
leia (quilowatts)
quilowatts_cons <- 0.12
valor_pago      <- (quilowatts*quilowatts_cons)
valor_total     <- valor_pago/100*18
escreval("Valor consumido quilowatts R$", valor_pago)


Fimalgoritmo
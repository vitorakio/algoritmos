Algoritmo "EX18"

Var paes, broa, quant_pao, quant_broa, venda_dia, total: real

Inicio
escreval("Informe a quantidade de pães vendidos:")
leia (quant_pao)
escreval("Informe a quantidade de broas vendidas:")
leia (quant_broa)

paes       <- quant_pao*0.12
broa      <- quant_broa*1.50
venda_dia <- paes+broa
total     <- venda_dia/100*110

escreval("Lucro das vendas do dia: R$", total)





Fimalgoritmo
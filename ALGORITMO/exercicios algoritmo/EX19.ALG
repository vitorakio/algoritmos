Algoritmo "ex19"

Var farinha, kgfarinha, agua, lagua, fermento, gfermento, quilowat, quilo_hora, imposto, preco_custo, preco_venda, gasto_total: real



Inicio
escreval ("Informe a quant de kg de farinha:")
leia (farinha)
escreval ("Informe o valor do kg de farinha:")
leia (kgfarinha)
escreval ("Informe a quant de litros de água:")
leia (agua)
escreval ("Informe o valor do litro de água:")
leia (lagua)
escreval ("Informe a quantidade em gramas de fermento:")
leia (fermento)
escreval ("Informe o valor da grama de fermento:")
leia (gfermento)
escreval ("Informe o numero de quilowatts por hora:")
leia (quilowat)
escreval ("Informe o valor do quilowat/hora:")
leia (quilo_hora)
escreval ("Informe o percentual do imposto:")
leia (imposto)


gasto_total <- (farinha + agua + fermento + quilowat)

preco_venda   <- (kgfarinha + lagua + gfermento + quilo_hora) / gasto_total

preco_custo  <- (farinha + agua + fermento + quilowat)*imposto/100 + preco_venda

escreval ("Os valores de custo/venda são de:", preco_venda:10:2 , ", ", preco_custo:10:2)

Fimalgoritmo
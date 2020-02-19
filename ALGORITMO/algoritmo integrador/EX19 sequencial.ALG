Algoritmo "EX19"

Var queijo, presunto, hamburguer, quant_sanduiche, sanduiche_inteiro, quant_sanduiche_total: real

Inicio
escreval("Informe a quantidade de sanduiches:")
leia (quant_sanduiche)

queijo     <- 0.50
presunto   <- 0.50
hamburguer <- 100
sanduiche_inteiro <- presunto + hamburguer + (queijo*2)
quant_sanduiche_total <- sanduiche_inteiro*quant_sanduiche/1000

escreval("Quantidade total em quilos: ", quant_sanduiche_total, "Kg")





Fimalgoritmo
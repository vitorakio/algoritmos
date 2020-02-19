Algoritmo "semnome"

Var ovo, farinha, acucar, creme, leite, total: real



Inicio
escreval ("Informe o preço da duzia de ovos")
leia (ovo)
escreval ("Informe o preço do KG da farinha")
leia (farinha)
escreval ("Informe o preço do KG de açúcar ")
leia (acucar)
escreval ("Informe o preço da lata de creme de leite")
leia (creme)
escreval ("Informe o preço do litro de leite")
leia (leite)

ovo     <- ovo/(12*4)
farinha <- (5 * 2 )/ farinha
acucar  <- acucar - (200 / 1000)
creme   <- creme / 2
leite   <- leite/ 500

total   <- ovo + farinha + acucar + creme + leite

escreval ("O bolo da palmirinha custa R$", total:2:2)





Fimalgoritmo
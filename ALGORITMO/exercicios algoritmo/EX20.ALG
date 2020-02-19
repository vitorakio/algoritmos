Algoritmo "ex20"

Var diaria, diaria_80, diaria_50, diaria_promocional: real



Inicio
escreval ("Informe o valor da diária")
leia (diaria)

diaria_promocional <- diaria - (diaria*25/100)

diaria_80          <- diaria_promocional + (diaria*80/100)

diaria_50          <- diaria_promocional + (diaria*50/100)

se diaria_50 > diaria_80 entao
escreval ("O normal é o mais rentável")
senao
escreval ("O promocional é o mais rentável")
fimse

escreval ("O valor da diária promocional R$ ", diaria_promocional)
escreval ("O valor total arrecadado com 80% de ocupação R$ ", diaria_80)
escreval ("O valor total arrecadado com 50% de ocupação R$ ", diaria_50)






Fimalgoritmo
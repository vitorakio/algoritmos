Algoritmo "ex22"

Var peso_eng, peso_ema, peso, peso_total_eng, peso_total_ema: real



Inicio
escreval ("Informe o peso da pessoa")
leia(peso)

peso_eng <- peso/100*15
peso_total_eng <- peso+peso_eng
peso_ema <- peso/100*20
peso_total_ema <- peso-peso_ema

escreval ("Novo peso se a pessoa engordar:", peso_total_eng)

escreval ("Novo peso se a pessoa emagrecer:", peso_total_ema)



Fimalgoritmo
Algoritmo "16"

Var num_e, v_b, v_n, v_v, perc_v_b, perc_v_n, perc_v_v: real

Inicio
escreval("Informe o número de eleitores: ")
leia (num_e)
escreval("Informe o número de votos em branco: ")
leia (v_b)
escreval("Informe o número de votos nulos: ")
leia (v_n)
escreval("Informe o número de votos válidos: ")
leia (v_v)

perc_v_b <- (v_b * num_e) / 100
perc_v_n <- (v_n * num_e) / 100
perc_v_v <- (v_v * num_e) / 100

escreval("Percentual de votos brancos:", perc_v_b, "%")
escreval("Percentual de votos nulos:", perc_v_n, "%")
escreval("Percentual de votos válidos:", perc_v_v, "%")


Fimalgoritmo
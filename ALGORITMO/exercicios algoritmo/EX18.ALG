Algoritmo "ex18 sequencial"

Var salario, anos_trabalho, num_filhos, perc_trab, perc_anos, perc_filhos: real

Inicio
escreval ("Informe o sal�rio: ")
leia (salario)
escreval ("Informe os anos trabalhados na empresa: ")
leia (anos_trabalho)
escreval ("Informe n�meros de filhos: ")
leia (num_filhos)

perc_trab <- ((anos_trabalho div 5) * 5) + anos_trabalho + (num_filhos * 3)
salario   <- (salario + (salario * perc)/100)

escreval ("Sal�rio total", salario)



Fimalgoritmo
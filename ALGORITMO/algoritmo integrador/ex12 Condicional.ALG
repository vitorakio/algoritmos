Algoritmo "semnome"

Var salario, salario_total, h_trab, valor_hora, valor_h: real

Inicio
escreval("Informe a quantidade de horas de trabalho")
leia (h_trab)
escreval("Informe o salario por hora")
leia (valor_h)



se h_trab > 160 entao

     salario_total <- (160*valor_h) + ((h_trab - 160) * (valor_h * 1.5))

senao

     salario_total <- (h_trab * valor_h)

fimse

escreva ("O salário total do funcionário R$", salario_total)



Fimalgoritmo
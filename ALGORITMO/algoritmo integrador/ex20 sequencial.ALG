Algoritmo "ex20"

Var salario_bruo, valor_horas, valor_horas_extra, valor_horas_total, salario_liquido, salario_bruto: real



Inicio
escreval("Informe o sal�rio bruto")
leia (salario_bruto)
escreval("Informe o valor das horas extras")
leia (valor_horas)
escreval("Informe o n�mero das horas extras")
leia (valor_horas_extra)

valor_horas_total <- (valor_horas * valor_horas_extra)/100*8

salario_liquido   <- salario_bruto + valor_horas_total

escreval ("Sal�rio liquido R$ ", salario_liquido)

Fimalgoritmo
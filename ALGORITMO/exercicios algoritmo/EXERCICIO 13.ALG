Algoritmo "semnome"

Var salario_mensal, percentual_reajuste, salario_total: real

Inicio
escreval("Informe o sal�rio mensal:")
leia (salario_mensal)
escreval("Informe o percentual de reajuste:")
leia(percentual_reajuste)
salario_total <- salario_mensal * (percentual_reajuste/100)
salario_total <- salario_total + salario_mensal
escreval("O sal�rio total com reajuste � de: R$", salario_total)



Fimalgoritmo
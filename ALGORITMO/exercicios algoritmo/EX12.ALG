Algoritmo "semnome"

Var horas_Trabalho, salario, salario_bruto, imposto, salario_total, valor_hora: real

Inicio
//ENTRADA
escreval("Informe horas de trabalho:")
leia (horas_trabalho)
escreval("Informe o sal�rio:")
leia (salario)
//PROCESSAMENTO
valor_hora <- salario * (1/25)
salario_bruto <- horas_trabalho * valor_hora
imposto <-  salario_bruto * 0.03
valor_hora <- salario_bruto - imposto
//SA�DA
escreval("Valor por horas trabalhadas: R$", valor_hora)
escreval("O salario bruto do trabalhador � de: R$", salario_bruto)
escreval("O salario com imposto � de: R$", imposto)
escreval("O sal�rio total sem imposto � de: R$", valor_hora)



Fimalgoritmo
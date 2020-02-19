Algoritmo "ex13"

Var nome: caractere
    num_h, total_h, total_h_e : real


Inicio

escreva ("Informe o nome: ")
        leia (nome)
escreva ("Informe horas de trabalho: ")
        leia (num_h)

total_h   <- num_h * 10
total_h_e <- num_h * 20

se num_h < 50 entao
        escreva ("Salário total: R$", total_h)
senao
        escreva ("Salário excedente: R$ ", total_h_e)
fimse




Fimalgoritmo
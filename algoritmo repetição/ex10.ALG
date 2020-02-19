Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor    : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 27/04/2016
Var
cont, d, t, cont_d: inteiro
soma : real
// Seção de Declarações das variáveis 


Inicio
cont_d <- 1
cont <- 0
soma <- 0



para d <- 1 ate 31 faca
     escreval ("Dia", cont_d)
     leia (t)
          se t > 30 entao
          cont <- cont + 1
          fimse
          soma <- soma + t
          cont_d <- cont_d +1
fimpara
soma <- soma/31
escreval ("dias temp foi maior que 30", cont)
escreval ("temperatura media:", soma:5:1)


Fimalgoritmo
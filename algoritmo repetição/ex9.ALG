Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o] 
// Professor    : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 27/04/2016
Var
num, i, j, cont, cont_d: inteiro


Inicio



escreval ("numero n")
leia (n)
escreval ("escreva i")
leia (i)
escreval ("escreva j")
leia (j)

cont_d <- 0
num    <- 0
enquanto cont < n faca
          se (num mod i = 0) ou (num mod j = 0) entao
          escreval (num)
          cont_d <- cont_d + 1
          fimse
          num <- num + 1
fimenquanto



Fimalgoritmo
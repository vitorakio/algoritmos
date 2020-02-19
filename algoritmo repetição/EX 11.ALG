Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor    : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 27/04/2016
Var
// Seção de Declarações das variáveis 
n, cont, d: inteiro

Inicio
escreval ("Informe um número:")
leia (n)

cont <- 0

para d <- 1 ate n faca
     se n mod d = 0 entao
        cont <- cont + 1
     fimse
fimpara
escreval ("A os divisores do numero", n, " é de:", cont)

Fimalgoritmo
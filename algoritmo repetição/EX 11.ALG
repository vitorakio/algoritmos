Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o] 
// Professor    : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 27/04/2016
Var
// Se��o de Declara��es das vari�veis 
n, cont, d: inteiro

Inicio
escreval ("Informe um n�mero:")
leia (n)

cont <- 0

para d <- 1 ate n faca
     se n mod d = 0 entao
        cont <- cont + 1
     fimse
fimpara
escreval ("A os divisores do numero", n, " � de:", cont)

Fimalgoritmo
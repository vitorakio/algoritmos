Algoritmo "ex 9"
// Disciplina   : [Linguagem e L�gica de Programa��o] 
// Professor    : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 06/04/2016
Var



Inicio

leia (valor)
escreval ("Informe o tipo de bilhete")
escreval ("1-Unit�rio, 2-Duplo, 3-10 viagens")
leia (tipo_bilhete)

se tipo_bilhete = 1 entao
   valor_bilhete <- 1.30
senao
     se tipo_bilhete = 2 entao
     valor_bilhete <- 2.60
senao
     valor_bilhete <- 12.0
fimse
     fimse

quant_bilhete <- int (valor/valor_bilhete)
troco         <- valor - (quant_bilhete  * valor)



Fimalgoritmo
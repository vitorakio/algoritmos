Algoritmo "ex 9"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor    : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 06/04/2016
Var



Inicio

leia (valor)
escreval ("Informe o tipo de bilhete")
escreval ("1-Unitário, 2-Duplo, 3-10 viagens")
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
algoritmo "ex21"
// Fun��o :
// Autor :
// Data : 04/05/2016
// Se��o de Declara��es 
var
custo: real
inicio
repita
      escreval ("Informe o custo do produto")
      leia (custo)
      custo <- custo + (custo * 8.5)/100
      escreval (custo)
      
ate custo < 1
fimrepita
fimalgoritmo

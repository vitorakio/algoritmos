Algoritmo "semnome"
// Disciplina  : [Linguagem e L�gica de Programa��o]
// Professor(a): Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 08/09/2015
Var
   // Se��o de Declara��es das vari�veis
   contar, indice : inteiro
   texto1,texto2,texto3,texto4,texto5,texto : caracter
   Flag1,Flag2 : logico
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   Flag1  := verdadeiro
   Flag2  := verdadeiro
   texto1 := " elefante"
   texto5 := " muita gente"
   texto2 := " incomodam"
   texto3 := " muito mais"
   texto4 := " menos"
   texto5 := " muita gente"
   texto  := texto2
   contar := 0
   Limpatela
   Enquanto Flag1 FA�A

      contar := contar + 1
      Escreval(contar,texto1+texto2+texto5)
      PARA indice de 1 AT� contar FA�A
           texto := texto + texto2
      FIMPARA

      Escreval(indice,texto1+texto+texto3)

      se contar > 3 entao
         flag1 := falso
      fimse

   FimEnquanto


Fimalgoritmo
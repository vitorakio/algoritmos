algoritmo "ex5"
var m: vetor[1..3, 1..3] de inteiro
    l, c, maior, menor: inteiro
inicio
   para l <- 1 ate 3 faca
      para c <- 1 ate 3 faca
          leia(m[l, c])
      fimpara
   fimpara
   
   maior <- m[1, 1]
   menor <- m[1, 1]
   para l <- 1 ate 3 faca
      para c <- 1 ate 3 faca
          se m[l, c] > maior entao
             maior <- m[l, c]
          senao
             se m[l, c] < menor entao
                menor <- m[l, c]
             fimse
          fimse
      fimpara
   fimpara

   escreval("Maior -> ", maior)
   escreval("Menor -> ", menor)
fimalgoritmo

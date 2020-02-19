Algoritmo "EX11"

Var n1, n2, n3: real



Inicio
leia (n1)
leia (n2)
leia (n3)

se (n1 > n2) e (n2 > n3) entao
   escreva (n3, n2, n1)
senao
se (n1 > n3) e (n3 > n2) entao
   escreva (n2, n3, n1)
senao
se (n2 > n1) e (n1 > n3) entao
   escreva (n1, n2, n3)
senao
se (n2 > n3) e (n3 < n1) entao
   escreva (n3, n1, n2)
senao
se (n3 > n1) e (n1 < n2) entao
   escreva (n1, n3, n2)
senao
se (n3 < n2) e (n2 < n1) entao
   escreva (n3, n2, n1)
senao
   
fimse
fimse
fimse
fimse
fimse
fimse
Fimalgoritmo
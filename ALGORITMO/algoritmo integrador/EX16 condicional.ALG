Algoritmo "EX16"

Var ang_x, ang_y, ang_z: real

Inicio
escreva ("Informe o angulo X: ")
leia (ang_x)
escreva ("Informe o angulo Y: ")
leia (ang_y)
escreva ("Informe o angulo Z: ")
leia (ang_z)

se (ang_x = ang_y) e (ang_y = ang_z) entao
   escreva ("Triangulo equilátero")
fimse

se (ang_x = ang_y) e (ang_y > ang_z) entao
   escreva ("Triangulo isósceles")
fimse

se (ang_x > ang_y) e (ang_y > ang_z) entao
   escreva ("Triangulo escanelo")
fimse


Fimalgoritmo
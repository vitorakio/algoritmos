algoritmo "EX15"

Var quantidade_alunos, quantidade_homens, quantidade_mulheres, qhmei, qhmai, qmmai, qmmi: real


Inicio

//ENTRADA
escreval("Informe a quantidade de alunos")
leia (quantidade_alunos)
escreval("Informe a quantidade de homens")
leia (quantidade_homens)
escreval("Informe a quantidade de mulheres")
leia (quantidade_mulheres)
//PROCESSAMENTO
quantidade_homens <- quantidade_alunos * 0.4
quantidade_mulheres <- quantidade_alunos - quantidade_homens
qhmei <- quantidade_homens * 0.8
qhmai <- quantidade_homens - qhmei
qmmai <- quantidade_mulheres * 0.2
qmmi  <- quantidade_mulheres - qmmai
escreval("Quantidade de mulheres menores de idade:", qmmi)
escreval("Quantidade de homens maiores de idade:", qhmai)

Fimalgoritmo
Algoritmo "ex15"

Var idade_homem1, idade_homem2, idade_mulher1, idade_mulher2, soma_idade, dif_idades: inteiro

Inicio

escreva ("Informe a idade do homem: ")
leia (idade_homem1)
escreva ("Informe a idade do homem: ")
leia (idade_homem2)

escreva ("Informe a idade da mulher: ")
leia (idade_mulher1)
escreva ("Informe a idade da mulher: ")
leia (idade_mulher2)

se (idade_homem1 > idade_homem2) entao
   soma_idade   <- idade_homem1
   idade_homem2 <- soma_idade
   soma_idade   <- idade_homem2
   fimse
   
se (idade_mulher1 > idade_mulher2) entao
   soma_idade   <- idade_mulher1
   idade_mulher2<- soma_idade
   soma_idade   <- idade_mulher2
   fimse

escreval ("Soma das idades do homem mais velho com a mulher mais nova: ", idade_homem1+idade_mulher2)
escreval ("Produto das idades do homem mais novo com a mulher mais velha: ", idade_homem2*idade_mulher1)

Fimalgoritmo
Algoritmo "ex17"

Var produto, valor_prod, parcela_pp, prod_cd: real

Inicio
escreval ("Informe o valor do produto: ")
leia (valor_prod)



produto <- valor_prod - (valor_prod*10)/100

prod_cd <- valor_prod - (valor_prod*5)/100


parcela_pp <- valor_prod/3

escreval ("O valor do produto com desconto é de R$", produto:2:2)
escreval ("O valor do produto parcelado R$", parcela_pp:2:2)
escreval ("O valor do produto a prazo com desconto R$", prod_cd:2:2)


Fimalgoritmo
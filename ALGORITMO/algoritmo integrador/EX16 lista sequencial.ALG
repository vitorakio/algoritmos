Algoritmo "EX16"

Var num_vendedor: caractere
    valor_comissao, num_carros, valor_carro, salario_fixo, salario_total, valor_total_carro: real


Inicio

//Entrada

   escreval("Informe o nome do vendedor")
   leia(num_vendedor)
   escreval("Informe a quantidade de carros vendidos1")
   leia(num_carros)
   escreval("Informe o valor do carro")
   leia(valor_carro)
   escreval("Informe o sal�rio fixo")
   leia(salario_fixo)
   
//Processamento
   
   valor_comissao    <- (num_carros * valor_carro) * 0.05
   salario_total     <- (salario_fixo + valor_comissao)
   
//Sa�da
   
   escreval("O sal�rio total do vendedor � de:", salario_total)




Fimalgoritmo
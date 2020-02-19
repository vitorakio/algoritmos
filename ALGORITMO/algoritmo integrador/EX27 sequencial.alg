algoritmo "ex27"

var
   quant_litros, quant_agua, quant_suco, q_agua1, q_suco2 : real


inicio

      escreval("Informe a quantidade de água")
      leia(quant_agua)
      escreval("Informe a quantidade de suco")
      leia(quant_suco)
      q_agua1  <- (agua*20)/100
      q_suco2  <- (suco*80)/2
      quant_litros <- q_agua1/q_suco2
      escreval ("Quantidade para fazer o suco de maracujá", quant_litros:10:2)
      

      
fimalgoritmo

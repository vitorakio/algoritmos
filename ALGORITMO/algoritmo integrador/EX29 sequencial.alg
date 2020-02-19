algoritmo "EX29"

var
   quant_tijolo, altura, comprimento, tijolo_usado :real

inicio
      escreva("Informe a altura da parede:")
      leia (altura)
      escreva("Informe o comprimento da parede:")
      leia (comprimento)
      
      quant_tijolo  <- 30 * 15
      tijolo_usado  <- altura * comprimento / quant_tijolo
      escreval("Serão usados: ", tijolo_usado)

fimalgoritmo

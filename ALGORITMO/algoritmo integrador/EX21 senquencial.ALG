Algoritmo "ex21"

Var quant_f, anel_chip, anel_alimento, anel_ca, gasto_total : real



Inicio

    escreval("Informe a quantidade de frangos:")
    leia (quant_f)

    anel_chip     <- 4
    anel_alimento <- 3.50
    anel_ca <- 4 + (3.50*2)
    gasto_total <- anel_ca * quant_f
    
    escreval ("Gasto total da granja R$ ", gasto_total)

Fimalgoritmo
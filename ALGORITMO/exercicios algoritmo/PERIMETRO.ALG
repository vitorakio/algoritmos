Algoritmo "semnome"

Var largura, comprimento, dimensao, dimensao1, perimetro, total, area, porcentagem: real

Inicio
        // Entrada
        escreval("Informe a largura do terreno")
        leia (largura)
        escreval("Informe o comprimento do terreno")
        leia (comprimento)
        escreval("Informe as dimensoes em largura da casa")
        leia (dimensao)
        escreval("Informe as dimens�es em comprimento da casa")
        leia (dimensao1)
        // Processamento
        perimetro <- (largura*comprimento)
        total <- (dimensao*dimensao1)
        area <- (perimetro-total)
        porcentagem <- (area*perimetro)/100
        // Sa�da
        escreval("As dimens�es do terreno em metros quardados � de:", perimetro, "m�, e a porcentagem de area de:", porcentagem, "%")
        
Fimalgoritmo
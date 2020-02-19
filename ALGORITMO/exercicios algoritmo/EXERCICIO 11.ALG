Algoritmo "semnome"

Var valor_reais, moeda1real, nota2reais, nota5reais, nota10reais, nota20reais, nota50reais, nota100reais, valortotal: inteiro



Inicio
escreval("Informe o valor do saque:")
leia (valor_reais)
nota100reais <- valor_reais div 100
valortotal <- valor_reais mod 100
nota50reais <- valortotal div 50
valortotal <- valortotal mod 50
nota20reais <- valortotal div 20
valortotal <- valortotal mod 20
nota10reais <- valortotal div 10
valortotal <- valortotal mod 10
nota5reais <- valortotal div 5
valortotal <- valortotal mod 5
nota2reais <- valortotal div 2
moeda1real <- valortotal mod 2
escreval("Nota(s) de 100 reais:", nota100reais)
escreval("Nota(s) de 50 reais:", nota50reais)
escreval("Nota(s) de 20 reais:", nota20reais)
escreval("Nota(s) de 10 reais:", nota10reais)
escreval("Nota(s) de 5 reais:", nota5reais)
escreval("Moeda(s) de 1 real:", moeda1real)
Fimalgoritmo
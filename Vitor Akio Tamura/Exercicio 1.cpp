#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main(){

float pg, cc, porc_i, perc_g, total_pizza, total_chop, total_porc, total_mporc, total, conta;
int quant_p, quant_c, quant_porc, quant_mporc, quant_pe;

printf ("Informe a quantidade de pessoas:");
scanf ("%d", &quant_pe);
printf ("Informe o valor da pizza grande:");
scanf ("%f", &pg);
printf ("Informe o valor do copo de chopp:\n");
scanf ("%f", &cc);
printf ("Informe o valor da porcao inteira:\n");
scanf ("%f", &porc_i);
printf ("Informe o percentual do garcom:\n");
scanf ("%f", &perc_g);
printf("_______________________________________\n\n");
printf ("Informe a quantidade de pizzas:\n");
scanf ("%d", &quant_p);
printf ("Informe a quantidade de chopps:\n");
scanf ("%d", &quant_c);
printf ("Informe a quantidade de porcoes inteiras:\n");
scanf ("%d", &quant_porc);
printf ("Informe a quantidade de porcoes meias:\n");
scanf ("%d", &quant_mporc);

total_pizza = pg * quant_p;
total_chop = cc * quant_c;
total_porc = porc_i * quant_porc;
total_mporc = quant_mporc * (porc_i/2);

total = total_pizza + total_chop + total_porc + total_mporc;

conta = (total+(total * perc_g)/100)/quant_pe;

printf ("Os pedidos foram:\n");
printf (" %d pizzas grandes\n %d chopps\n %d porcoes inteias\n %d porcoes meia\n", quant_p, quant_c, quant_porc, quant_mporc);
printf ("Dividindo com o total de: R$ %.2f\n", conta);

getch;
}

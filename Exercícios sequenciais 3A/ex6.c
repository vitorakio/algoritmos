#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
float ovo, farinha, acucar, creme, leite, total, ppovo, pfarinha, tcreme, tleite, tacucar, bolo;

printf ("Informe os precos dos produtos:");
printf("\nDuzia de ovos:");
scanf("%f", &ovo);
printf("\nFarinha:");
scanf("%f", &farinha);
printf("\nAcucar:");
scanf("%f", &acucar);
printf("\nCreme:");
scanf("%f", &creme);
printf("\nLeite:");
scanf("%f", &leite);

ppovo = (ovo/12)*0.4;
pfarinha = farinha/2;
tcreme = creme*2;
tleite = leite*1.5;
tacucar = acucar*0.2;

bolo = tacucar+ppovo+pfarinha+tcreme+tleite;

printf("\nO preco dos 4 ovos:____________R$%.2f", ppovo);
printf("\nPreco do meio kg da farinha:___R$%.2f", pfarinha);
printf("\nPreco 2 latas creme:___________R$%.2f", tcreme);
printf("\nPreco do acucar:_______________R$%.2f", tacucar);
printf("\nPreco 1 litro e meio de leite:_R$%.2f", tleite);
printf("\nPreco total do bolo:___________R$%.2f", bolo);
}

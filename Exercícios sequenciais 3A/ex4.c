#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
int seg,ter,qua,qui,sex, totalp;
float mil;

printf("Informe quant chuva segunda:");
scanf("%d", &seg);
printf("Informe quant chuva terca:");
scanf("%d", &ter);
printf("Informe quant chuva quarta:");
scanf("%d", &qua);
printf("Informe quant chuva quinta:");
scanf("%d", &qui);
printf("Informe quant chuva sexta:");
scanf("%d", &sex);

totalp = seg+ter+qua+qui+sex;
mil = totalp * 25.4;

printf("Choveu durante a semana %.2f milimetros.", mil);
}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    float sal, perc, total;

    printf("Informe o salario mensal:");
    scanf("%f", &sal);
    printf("Informe o percentual de reajuste:");
    scanf("%f", &perc);

    total = (sal*perc)/100;

    printf("O novo salario com reajuste: R$%.2f", sal-total);
}

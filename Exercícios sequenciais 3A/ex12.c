#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    int horas;
    float sal, htrab, salbruto, imp, saltotal;

    printf("Informe as horas trabalhadas:");
    scanf("%d", &horas);
    printf("Informe o valor do salario minimo:");
    scanf("%f", &sal);

    htrab = sal / 25;
    salbruto = horas * htrab;
    imp = (salbruto * 3)/100;
    saltotal = salbruto - imp;

    printf("\nA hora trabalhada vale 1/25 do salario minimo.....................................................: %.2f", htrab);
    printf("\nO salario bruto equivale ao numero de horas trabalhadas multiplicado pelo valor da hora trabalhada: %.2f", salbruto);
    printf("\nO imposto equivale a 3 porcento do salario bruto..................................................: %.2f", imp);
    printf("\nO salario a receber equivale ao salario bruto menos o imposto:....................................: %.2f", saltotal);



}

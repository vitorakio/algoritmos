#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{

    float sal_minimo, sal_bruto, imposto, horas_trab, sal_rec, hora;

    printf ("Informe o numero de horas trabalhadas:");
    scanf ("%f", &horas_trab);
    printf ("Informe o salario minimo:");
    scanf ("%f", &sal_minimo);

    //////////////////////////

    hora = (sal_minimo / 25);
    sal_bruto = (hora * horas_trab);
    imposto = ((sal_bruto * 3) / 100);
    sal_rec = (sal_bruto - imposto);

    printf ("\n a)A hora trabalhada vale 1/25 do salario manimo: %.2f", hora);
    printf ("\n b)O salario bruto equivale ao numero de horas trabalhadas multiplicado pelo valor da hora trabalhada: %.2f", sal_bruto);
    printf ("\n c)O imposto equivale a 3 porcento do salario bruto: %.2f", imposto);
    printf ("\n d)O salario a receber equivale ao salário bruto menos o imposto: %.2f", sal_rec);

    getch;
}

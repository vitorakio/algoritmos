#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
    float sal, reaj, total;

    printf ("Informe o salario atual: R$");
    scanf ("%f", &sal);
    printf ("Informe o percentual de reajuste:");
    scanf ("%f", &reaj);

    total = (sal * reaj)/100;

    printf("Salario total do trabalhador: R$%.2f", sal - total);
    getch();
}

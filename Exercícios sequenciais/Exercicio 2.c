#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{

int base, altura, area;

printf ("Informe a base do triangulo:");
    scanf ("%d", &base);
printf ("Informe a altura do triangulo:");
    scanf ("%d", &altura);

    area = (altura * base) / 2;

printf ("A area do triangulo e: %d", area);
getch();

}

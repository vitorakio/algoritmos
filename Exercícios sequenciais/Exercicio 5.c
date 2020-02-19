#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

main()
{
    int desc, prod;

    printf ("Informe o valor do produto:");
    scanf ("%d", &prod);

    desc = ((prod * 9.2) / 100);

    printf ("O valor do produto com desconto e : R$%d", prod - desc);

    getch();
}

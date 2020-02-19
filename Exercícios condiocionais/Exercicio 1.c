#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
    int capac, peso1, peso2, peso3, peso4, peso5, total;

    printf ("Informe a capacidade de pessoas que o elevador suporta:");
    scanf ("%d", &capac);
    printf ("Informe o peso de cada pessoa:");
    scanf ("%d", &peso1);
    scanf ("%d", &peso2);
    scanf ("%d", &peso3);
    scanf ("%d", &peso4);
    scanf ("%d", &peso5);

    total = peso1+peso2+peso3+peso4+peso5;

    if (total < capac)
    {
        printf ("Pode subir");
    }
    else
    {
        printf ("Nao sobe!");
    }

    getch();
}

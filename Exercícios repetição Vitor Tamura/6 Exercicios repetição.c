#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


main()
{
    int disco, dias, maiorvenda, maiordisco;
printf ("Informe a quantidade de discos\n");

    for (dias=1; dias <= 7; dias++)
    {
        printf ("Dia %d :", dias);
        scanf("%d", &disco);

        if (dias == 1)
        {
            maiordisco = disco;
            maiorvenda = dias;
        }
            else
            if (disco > maiordisco)
            {
                maiordisco = disco;
                maiorvenda = dias;
            }
    }
    printf ("Dia da maior venda: %d\n", maiorvenda);
    printf ("Com %d discos vendidos.\n", maiordisco);






}

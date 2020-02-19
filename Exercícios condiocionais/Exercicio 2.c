#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
    int numdiv, total;

    printf ("Informe um numero:");
    scanf ("%d", &total);

    if (total % 3 == 0 || total % 7 == 0)
    {
        printf ("Numero divisivel!");
    }
    else
    {
        printf ("Numero nao divisivel!");
    }

    getch();
}

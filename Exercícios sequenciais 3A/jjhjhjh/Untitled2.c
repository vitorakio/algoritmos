#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
    int pd, sg, cont, somad;


    for (cont = 1000; cont < 9999; cont++)
    {
        pd = cont % 100;
        sg = cont / 100;
        somad = pd + sg;
        somad = somad * somad;
        if (somad == cont)
        {
            printf ("%d\n", somad);
        }
    }
    return;
}

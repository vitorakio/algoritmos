#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


main()
{
    int eleitor, nulo, valido, branco, nvotaram;
    float pbranco, pvalido, pnulo, pnvotaram;

    printf ("Informe o numero de eleitores:");
    scanf ("%d", &eleitor);
    printf ("Informe o numero de votos em branco:");
    scanf ("%d", &branco);
    printf ("Informe o numero de votos validos:");
    scanf ("%d", &valido);
    printf ("Informe o numero de votos nulos:");
    scanf ("%d", &nulo);

    pbranco = (branco * 100)/eleitor;
    pvalido = (valido * 100)/eleitor;
    pnulo = (nulo * 100)/eleitor;
    nvotaram = eleitor - (branco + valido + nulo);
    pnvotaram = (nvotaram * 100)/eleitor;

    printf ("Percentual das pessoas que votaram em branco: %.2f", pbranco );
    printf ("\nPercentual das pessoas que tiveram votos validos: %.2f", pvalido );
    printf ("\nPercentual das pessoas que votaram nulo: %.2f", pnulo );
    printf ("\nPercentual das pessoas que nao votaram: %.2f", pnvotaram );

    getch;



}

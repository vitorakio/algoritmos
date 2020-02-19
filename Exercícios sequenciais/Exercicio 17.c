#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


main()
{
    float vcompra, vvista, vprazo, pprazo, tprazo;

    printf ("Informe o valor da compra:");
    scanf ("%f", &vcompra);

    vvista = vcompra - ((vcompra * 10)/100);
    vprazo = vcompra/3;
    pprazo = vprazo - ((vprazo * 5)/100);
    tprazo = pprazo * 3;

    printf ("O valor a vista da compra: %.2f", vvista);
    printf ("\nO valor da parcela da compra: %.2f", pprazo);
    printf ("\nO valor total da compra a prazo: %.2f", tprazo);

    getch;
}

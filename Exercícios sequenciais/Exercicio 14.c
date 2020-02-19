#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
    float lit_gas, abast;

    //distancia = 520km
    //12km por litro
    //preço do combustivel 3,75 litro

    lit_gas = 520 / 12;
    abast = lit_gas * 3,75;

    printf ("Maria ira gastar R$%.2f", abast);
    getch();
}

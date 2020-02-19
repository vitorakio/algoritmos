#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int aux, somadig=0, dig1, dig2, dig3, dig4, dig5, cc, dv, dv2, somad;

    printf("Informe a conta conrrente:");
    scanf("%d", &cc);

    dig5 = cc%10;
    aux = cc/10;
    dig4 = aux%10;
    aux = aux/10;
    dig3 = aux%10;
    aux = aux/10;
    dig2 = aux%10;
    dig1 = aux/10;

    somadig = dig1 + dig2 + dig3 + dig4 + dig5;

    if (somadig >= 10)
    {
        dig1    = somadig%10;
        dig2    = somadig/10;
        somadig = dig1 + dig2;
        if (somadig >= 10){
            dig1    = somadig%10;
            dig2    = somadig/10;
            somadig = dig1 + dig2;

        }

    }

    printf("O digito verificador: %d", &somadig);

}

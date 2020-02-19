#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int val, maior=0, cont;

    printf("Informe 3 valores:");
    for(cont=0;cont<3;cont++){
        scanf("%d", &val);
            if (val > maior){
                maior = val;
            }
    }
    printf ("O maior valor eh %d", maior);
}

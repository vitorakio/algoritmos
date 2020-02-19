#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int capac, cont, pess=0, somapess=0;

    printf("Informe a capacidade do elevador:");
    scanf("%d", &capac);
    for(cont=0; cont<5; cont++){
        printf("\nInforme o peso da %d o pessoa:", cont+1);
        scanf("%d", &pess);

        somapess = somapess + pess;
    }

    printf("\nA soma das 5 pessoas eh:%d", somapess);

    if (capac < somapess){
        printf("\nO elevador nao pode subir!!!");
    }
    else printf("\nO elevador pode subir!!!");


}


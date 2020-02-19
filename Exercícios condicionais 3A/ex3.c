#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    float nota, media=0, total;
    int cont;

    printf("Informe as notas do bimestre:");
    for (cont=0;cont<4;cont++){
        printf("\nInforme a %d o nota:", cont+1);
        scanf("%f", &nota);
        media = media + nota;
    }
    total = media/4;

    if (total > 7){
        printf("\nAPROVADO!! Media final: %.2f", total);
    }
    else printf ("\nREPROVADO!! Media final: %.2f", total);
}

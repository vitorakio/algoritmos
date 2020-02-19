#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int num, par=0, cont;

    printf("Informe 4 numeros inteiros:");

    for(cont=0;cont<4;cont++){
        printf("\n%do numero:", cont+1);
        scanf("%d", &num);

        if (num%2==0){
            par = num + par;
        }
    }
    printf("A soma dos numeros pares: %d", par);
}

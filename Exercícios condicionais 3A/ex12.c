#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int idade;

    printf("Informe a idade do nadador:");
    scanf("%d", &idade);

    if (idade >= 18){
        printf("Adulto");
    }
    else if (idade >= 14){
        printf("Juvenil B");
    }
    else if (idade >= 11){
        printf("Juvenil A");
    }
    else if (idade >= 8){
        printf("Infantil B");
    }
    else if (idade >= 5){
        printf("Infantil A");
    }
}


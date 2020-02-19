#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int bat;

    printf("Informe os batimentos:");
    scanf("%d", &bat);
    if (bat >= 120){
        printf("Batimento turbinado!");
    }
    else if(bat <= 100){
        if(bat >= 71){
            printf("Batimento acelerado!");
    }
        else if(bat >= 60){
            printf("Batimento normal");
    }
        else if(bat >= 40){
            printf("Batimento baixo");
    }
        else if(bat == 0){
            printf("Morreu");
    }
    }
}

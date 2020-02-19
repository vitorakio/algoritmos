#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    float ppm;
    int dc, dcm, dch;

    printf("Informe a duracao da chamada em minutos:");
    scanf("%d", &dc);



    if (dc<=10){
        ppm = dc*0.30;
    }
    else if (dc>10){
        ppm = (10*0.30) + ((dc-10)*0.05);
    }

    dch = dc/60;
    dcm = dc%60;

    printf("O usuario falou %d horas e %d minutos.", dch, dcm);
    printf("\nO preco a pagar: R$%.2f", ppm);

}

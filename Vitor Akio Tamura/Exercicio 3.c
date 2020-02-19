#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main()
{
    float vel_max, vel_mot, vel, multa, total_ex, valor;

    printf ("Informe a velocidade maxima permitida:");
    scanf ("%f", &vel_max);

    printf ("Informe a velocidade que o motorista esta dirigindo:");
    scanf ("%f", &vel_mot);

    vel = vel_max - vel_mot;

    if (vel > -25){
            multa = vel_mot - vel_max;
            valor = multa * 78;
            total_ex = valor + (78/100);
            printf ("O condutor ira pagar: R$ %.2f de multa.\n", total_ex);
    }

    else if(vel > -13 || vel < -25){
            multa = vel_mot - vel_max;
            valor = multa * 5;
            printf ("O condutor ira pagar: R$ %.2f de multa.\n", valor);
    }


    else if (vel > -12){
            multa = vel_mot - vel_max;
            valor = multa * 2;
            printf ("O condutor ira pagar: R$ %.2f de multa.", valor);
    }


    getch;

}

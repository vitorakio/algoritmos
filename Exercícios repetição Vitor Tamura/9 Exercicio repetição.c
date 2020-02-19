#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){
    int caarapo, rionegro, anos=0, c_menoshab, c_maishab;
    float percc, percrn, t_maior, t_menor;


    printf ("Informe a populacao de Caarapo:");
    scanf ("%d", &caarapo);
    printf ("Informe a populacao de Rio Negro:");
    scanf ("%d", &rionegro);
    printf ("Informe a porcentagem do crescimento anual de Caarapo:");
    scanf ("%f", &percc);
    printf ("Informe a porcentagem do crescimento anual de Rio Negro:");
    scanf ("%f", &percrn);

    if (caarapo < rionegro && percc > percrn || caarapo > rionegro && percc < percrn)
    {
        c_menoshab = rionegro;
        t_maior = percrn;
        c_maishab = caarapo;
        t_menor = percc;
            if (caarapo < rionegro)
            {
                c_menoshab = caarapo;
                t_maior = percc;
                c_maishab = rionegro;
                t_menor = percrn;
            }
        do
        {
                c_menoshab = c_menoshab+(c_menoshab * t_maior)/100;
                c_maishab = c_maishab+(c_maishab * t_menor)/100;
                anos++;
        }
        while (c_menoshab > c_maishab);
            printf ("A menor cidade levara %d ano(s) para alcancar a maior cidade.", anos);
    }
    else
        printf ("A cidade que tem a maior populacao nunca sera ultrapassado.");

}

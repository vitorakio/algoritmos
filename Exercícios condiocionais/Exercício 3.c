#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
    float media, nota1, nota2, nota3, nota4;

    printf ("Informe as quatro notas do bimestre=");
    scanf ("%f", &nota1);
    printf ("\nNota 1: [%.2f], Nota 2[~], Nota 3[~], Nota 4[~]\n", nota1);
    scanf ("%f", &nota2);
    printf ("\nNota 1: [%.2f], Nota 2[%.2f], Nota 3[~], Nota 4[~]\n", nota1, nota2);
    scanf ("%f", &nota3);
    printf ("\nNota 1[%.2f], Nota 2[%.2f], Nota 3[%.2f], Nota 4[~]\n", nota1, nota2, nota3);
    scanf ("%f", &nota4);
    printf ("\nNota 1: [%.2f], Nota 2[%.2f], Nota 3[%.2f], Nota 4[%.2f]\n", nota1, nota2, nota3, nota4);

    media = (nota1 + nota2 + nota3 + nota4)/4;

    if (media > 70)
    {
        printf ("\n\nAPROVADO! Sua media foi %.2f", media);
    }
    else
    {
        printf ("\n\nREPROVADO! Sua media foi %.2f", media);
    }

    getch();
}

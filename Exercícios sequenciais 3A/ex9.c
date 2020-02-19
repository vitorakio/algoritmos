#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    int tcomp, tlarg, ccomp, clarg, aterreno, acasa;
    float perc, alivre;

    printf("Informe o comprimento e a largura do terreno:");
    scanf("%d", &tcomp);
    scanf("%d", &tlarg);
    printf("Informe o comprimento e a largura da casa:");
    scanf("%d", &ccomp);
    scanf("%d", &clarg);

    aterreno = tcomp+tlarg;
    acasa = ccomp+clarg;
    alivre = aterreno - acasa;
    perc = (alivre*aterreno)/100;


    printf("Area livre em metros quadrados:%.2f", (alivre/2));
    printf("\nPercentual do terreno livre:%.2f", perc);
}

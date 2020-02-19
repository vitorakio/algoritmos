#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    float alt, sombrap, sombra, predio;

    printf("Informe sua altura:");
    scanf("%f", &alt);
    printf("Informe o tamanho da sua sombra:");
    scanf("%f", &sombra);
    printf("Informe o tamanho da sombra do predio:");
    scanf("%f", &sombrap);

    predio = (sombra*sombrap)/alt;

    printf("Altura do predio:%.2f", predio);
}

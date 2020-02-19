#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    int base, altura, area;

    printf("Informe a base do triangulo:");
    scanf("%d", &base);
    printf("Informe a altua do triangulo:");
    scanf("%d", &altura);

    area = (base*altura)/2;

    printf("(%d * %d)/ 2 = %d", base, altura, area);
}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
float raio, area, r;

printf("Informe o raio do circulo:");
scanf("%f", &raio);

r=3.1415;
area = r*(raio*raio);

printf ("r*%.0f^2 = %.2f", raio, area);
}


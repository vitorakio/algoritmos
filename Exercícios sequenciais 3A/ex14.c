#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    float gastotal, valgas;

    gastotal = 520/12;
    valgas = 3.75*gastotal;

    printf("Maria ira precisar de %.2f litros e ira gastar R$%.2f de gasolina.", gastotal, valgas);
}

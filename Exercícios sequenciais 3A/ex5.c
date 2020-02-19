#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    float val, nval;

    printf("Informe o valor do produto:");
    scanf("%f", &val);

    nval = val - ((val*9.5)/100);

    printf("O valor do novo produto: R$%.2f", nval);
}

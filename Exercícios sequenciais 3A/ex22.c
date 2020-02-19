#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    float varrecadado, prem, sena, quina, quadra;

    printf("Informe o valor do dinheiro arrecadado:");
    scanf("%f", &varrecadado);

    prem = varrecadado - ((varrecadado*46)/100);

    sena = ((prem*35)/100);
    quina = ((prem*19)/100);
    quadra = ((prem*12)/100);

    printf("\nValor total da premiacao:R$%.2f", prem);
    printf("\nPremio da Sena..........:R$%.2f", sena);
    printf("\nPremio da Quina.........:R$%.2f", quina);
    printf("\nPremio da Quadra........:R$%.2f", quadra);

}

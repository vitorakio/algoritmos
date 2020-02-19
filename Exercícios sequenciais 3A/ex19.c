#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    float kgfarinha, vfarinha, qtdeagua, vagua, qtdeferm, vfermento, nkw,vkw, percpp;
    float pfarinha, pagua, pferm, pkw, ptotal, pcusto, tperc;

    printf("Informe a quantidade d kg de farinha:");
    scanf("%f", &kgfarinha);
    printf("Informe o valor do kg de farinha:");
    scanf("%f", &vfarinha);
    printf("Informe quantidade de agua em litros:");
    scanf("%f", &qtdeagua);
    printf("Informe o valor do litro de agua:");
    scanf("%f", &vagua);
    printf("Informe a quantidade de fermento:");
    scanf("%f", &qtdeferm);
    printf("Informe o valor do grama de fermento:");
    scanf("%f", &vfermento);
    printf("Informe o numero de quilowatts/hora:");
    scanf("%f", &nkw);
    printf("Informe o valor do quilowatt/hora:");
    scanf("%f", &vkw);
    printf("Informe o percentual do imposto:");
    scanf("%f", &percpp);

    pfarinha = kgfarinha * vfarinha;
    pagua = qtdeagua*vagua;
    pferm = qtdeferm*vfermento;
    pkw = nkw*vkw;

    ptotal = pfarinha+pagua+pferm+pkw;
    tperc = ptotal-(ptotal*percpp)/100;
    pcusto = tperc/100;

    printf("\nPreco total fab:.........R$%.2f", ptotal);
    printf("\nPreco de custo do pao:...R$%.2f", tperc);
    printf("\nPreco de venda de um pao:R$%.2f", pcusto);
}

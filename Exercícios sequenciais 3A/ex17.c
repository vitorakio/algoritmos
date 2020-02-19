#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    float vista, prazo, compra, vprazo, parcela;

    printf("Informe o valor da compra:");
    scanf ("%f", &compra);

    vista = compra-((compra*10)/100);
    prazo = (compra*5)/100;
    parcela = (compra/3) + prazo;
    vprazo = parcela*3;

    printf("\nValor a vista: R$%.2f", vista);
    printf("\nValor a prazo: R$%.2f", vprazo);
    printf("\nValor da parcela: 3x de R$%.2f", parcela);
}

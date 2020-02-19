#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    float dep, saldo, imposto;

    printf("Informe o valor do depósito:");
    scanf ("%f", &dep);

    imposto = 0.38*2;
    saldo = dep-((dep*imposto)/100);
    printf("Saldo atual: R$%.2f", saldo);
}

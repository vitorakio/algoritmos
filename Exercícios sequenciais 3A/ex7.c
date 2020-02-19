#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    float preco, npreco;
    printf("Informe o preco do produto:");
    scanf("%f", &preco);

    npreco = preco-((preco*10)/100);

    printf("Novo preco: R$%.2f", npreco);
}

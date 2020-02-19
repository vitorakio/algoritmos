#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    char nome[25];
    float sal, tvendas, tsal, comissao;
    int perc;

    printf("Informe o nome do vendedor:");
    scanf("%s", &nome);
    printf("Informe o salario fixo:");
    scanf("%f", &sal);
    printf("Informe o total de vendas(em R$):");
    scanf("%f", &tvendas);
    printf("Informe o percentual da comissao:");
    scanf("%d", &perc);

    comissao = (tvendas*perc)/100;
    tsal = comissao+sal;

    printf("Nome do vendedor:%s", nome);
    printf("\nSalario total do vendedor: R$%.2f", tsal);
}

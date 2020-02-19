#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
main()
{
    int dep, inss;
    float sal, sall, salliq;
    char nome[30];

    printf("Informe o nome do usuario:");
    gets(nome);
    printf("\nInforme o salario bruto:");
    scanf("%f", &sal);
    printf("\nInforme o numero de dependentes:");
    scanf("%d", &dep);

    if (sal >= 701){
        inss = 10;
    }
    else if (sal >= 301){
        inss = 9;
    }
    else inss = 8;

    salliq = (sal - (inss*(sal/100))) + ((15 * dep) + 40 + 100);

    printf("O salario do funcionario: R$%.2f", salliq);

}

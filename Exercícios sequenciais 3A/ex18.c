#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    float sal, qanos, filhos, bfilho, tfilho, sfilho, saltotal, pbonus, bonus, tbonus, add, tadd, badd;

    printf("Informe o salario:");
    scanf("%f", &sal);
    printf("Quantidade de anos trab:");
    scanf("%f", &qanos);
    printf("Informe quant filhos:");
    scanf("%f", &filhos);

    if (qanos > 5){
    bonus = qanos/5;
    pbonus = bonus * 5;
    bonus = sal*(pbonus/100);
    tbonus = sal + bonus;
    printf("\nSalario com bonus de 5 anos: R$%.2f", tbonus);
    }
    else printf("\nNao possui bonus de 5 anos.");

        badd = qanos/1;
        add = sal * (badd/100);
        tadd = sal + add;
        printf("\nSalario com bonus de 1 ano: R$%.2f", tadd);

    bfilho = filhos * 3;
    tfilho = sal*(bfilho/100);
    sfilho = sal + tfilho;
    printf("\nSalario com adicional filho: R$%.2f", sfilho);

    printf("\nSalario total com tds os adicionais: R$%.2f", sal+bonus+add+tfilho-20);
}

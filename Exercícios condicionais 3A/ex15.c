#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    float sal, reaj;

    printf("Informe o salario:");
    scanf("%f", &sal);

    if (sal <= 500){
        reaj = sal+(sal*15)/100;
            printf("Salario com reajuste: R$%.2f", reaj);
    }
    else if (sal >= 500 || sal <= 1000){
        reaj = sal+(sal*10)/100;
            printf("Salario com reajuste: R$%.2f", reaj);
    }
    else if (sal >= 1000){
        reaj = sal+(sal*5)/100;
        printf("Salario com reajuste: R$%.2f", reaj);
    }
}

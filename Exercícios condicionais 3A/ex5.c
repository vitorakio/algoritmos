#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int num1, num2;

    printf("Informe dois numeros:");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1>num2){
        printf("O num1 eh maior que o num2!");
    }
    else if (num2>num1){
        printf("O num2 eh maior que o num1!");
    }
    else if (num1==num2){
        printf("Os dois numeros sao iguais!");
    }

}

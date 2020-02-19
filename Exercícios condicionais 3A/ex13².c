#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int num1, num2, num3, maior=0;

printf("Informe tres numeros inteiros:\n");
scanf("%d", &num1);
scanf("%d", &num2);
scanf("%d", &num3);

if (num1 > num2 && num1 > num3){
    num1 = maior;
    printf("O primeiro numero eh o maior");
}
else if (num2 > num1 && num2 > num3){
    num2 = maior;
    printf("O segundo numero eh o maior");
}
else if (num3 > num1 && num3 > num2){
    num3 = maior;
    printf("O terceiro numero eh o maior");
}

}

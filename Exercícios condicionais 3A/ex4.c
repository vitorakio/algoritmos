#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int num1, num2, dif;
    float total;

    printf("Informe o primeiro numero:");
    scanf("%d", &num1);

    printf("Informe o segundo numero:");
    scanf("%d", &num2);

	if (num1 > num2){
    dif = num1 - num2;
	}
	else if (num2 > num1){
	dif = num2 - num1;	
	}

    total = (dif*60)/100;

    printf("60 porcento diferenca dos dois numeros: %.2f", total);
}

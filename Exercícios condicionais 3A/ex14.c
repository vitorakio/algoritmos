#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main()
{
    int num;

    printf("Informe um numero inteiro:");
    scanf("%d", &num);

    if((num%2==0) && num<10){
        printf("Numero par menor que 10");
    }
    else if(num%2==1 && num<10){
        printf("Numero impar menor que 10");
    }
    else printf("Numero fora do intervalo!!");

}


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    float num, soma=0, media;
    int cont=0;


    while(num<100){
        scanf("%f", &num);
        cont++;
        soma=soma+num;
        media = soma/cont;
    }
    printf("O numero foi informado %d vezes.", cont);
    printf("\nMedia: %.2f", media);

}

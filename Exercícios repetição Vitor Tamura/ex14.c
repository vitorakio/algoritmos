#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){

int n, i;

i=0;

printf("Informe um numero inteiro:");
scanf("%d", &n);

    while((i*(i+1)*(i+2)) > n){
        i++;
    }
        if (n >= i*(i+2)*(i+3)){
            printf("O numero %d eh um numero perfeito.", n);
        }
            else printf("O numero %d nao eh um numero perfeito.", n);


}

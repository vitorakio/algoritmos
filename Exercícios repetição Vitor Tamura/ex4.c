#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    int cont, par=0, total;

    for(cont=0;cont<100;cont++){
        if ((cont % 2) == 0){
            par = par+cont;

        }
    }
    printf("A soma dos 100 primeiros pares: %d", par);
}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    int num, total=0, cont;

    for(cont=0; cont<10; cont++){
        scanf("%d", &num);
        total=total+num;
    }
    printf("Soma: %d", total);
}

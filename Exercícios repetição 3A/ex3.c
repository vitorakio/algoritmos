#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    int num, total, multi;

    printf("Informe um numero p/ calcular a tabuada.");
    scanf("%d", &num);

    for(multi=0; multi<11; multi++){
            total = num * multi;
        printf("\n%d x %d = %d", num, multi, total);
    }
}

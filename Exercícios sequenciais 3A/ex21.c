#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    int n50, n10, n5, n2, total, sobra;

    printf("Informe um valor a ser sacado:");
    scanf("%d", &total);

    n50 = total/50;
    sobra = total % 50;
    n10 = sobra/10;
    sobra = sobra % 10;
    n5 = sobra/5;
    sobra = sobra % 5;
    n2 = sobra/2;
    sobra = sobra % 2;

    printf("\nNotas de 50:%d", n50);
    printf("\nNotas de 10:%d", n10);
    printf("\nNotas de 5:%d", n5);
    printf("\nNotas de 2:%d", n2);

}


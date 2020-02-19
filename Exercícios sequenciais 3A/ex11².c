#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    int n100, n50, n20, n10, n5, n2, n1, total, sobra;

    printf("Informe o valor a ser sacado:");
    scanf("%d", &total);

    n100 = total / 100;
    sobra = total % 100;
    n50 = sobra  / 50;
    sobra = sobra % 50;
    n20 = sobra / 20;
    sobra = sobra % 20;
    n10 = sobra / 10;
    sobra = sobra % 10;
    n5 = sobra / 5;
    sobra = sobra % 5;
    n2 = sobra / 2;
    sobra = sobra % 2;
    n1 = sobra % 2;

    printf("\nNotas de 100=%d", n100);
    printf("\nNotas de 50=%d", n50);
    printf("\nNotas de 20=%d", n20);
    printf("\nNotas de 10=%d", n10);
    printf("\nNotas de 5=%d", n5);
    printf("\nNotas de 2=%d", n2);
    printf("\nNotas de 1=%d", n1);
}

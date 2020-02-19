#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
    int n100, n50, n20, n10, n5, n2, n1, valor, sobra;

    printf ("Informe o valor do saque: R$");
    ("%s", &valor);

    n100 = valor / 100;
    sobra = valor % 100;
    n50 = sobra / 50;
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

    printf ("Notas de R$100,00 %.2s", n100);
    printf ("Notas de R$50,00 %.2s", n50);
    printf ("Notas de R$20,00 %.2s", n20);
    printf ("Notas de R$10,00 %.2s", n10);
    printf ("Notas de R$5,00 %.2s", n5);
    printf ("Notas de R$2,00 %.2s", n2);
    printf ("Notas de R$1,00 %.2s", n1);

    getch;

}


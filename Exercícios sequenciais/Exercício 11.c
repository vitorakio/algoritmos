#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
    int n100, n50, n20, n10, n5, n2, n1, valor, sobra;

    printf ("Informe o valor do saque: R$");
    scanf ("%d", &valor);

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

    printf ("\nNotas de R$100,00 = %d", n100);
    printf ("\nNotas de R$50,00 = %d", n50);
    printf ("\nNotas de R$20,00 = %d", n20);
    printf ("\nNotas de R$10,00 = %d", n10);
    printf ("\nNotas de R$5,00 = %d", n5);
    printf ("\nNotas de R$2,00 = %d", n2);
    printf ("\nNotas de R$1,00 = %d", n1);

    getch;

}

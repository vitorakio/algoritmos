#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
    int num[20];
    int cont;
    int n = 0;
    int contpar = 0;
    int soma;

    scanf ("%d", &n);

    for (cont = 0; cont < 20; cont++)
        num[cont] = n++;

    for (cont = 0; cont < 20; cont++)
        printf("Os numeros do vetor: %d = %d\n", cont, num[cont]);

    if (num[cont] != 0)

    for (cont = 0; cont < 20; cont++)
             if (num[cont] % 2 = 0)
             soma = num[cont] + contpar++;

            printf ("Numeros pares no vetor: %d\n", soma);


    return 0;
}

#include <iostream>
#include <stdio.h>
#include <conio.h>


using namespace std;

int main()
{
    int vet[10];
    int pos;
    int cont1 = 0;
    int cont2 = 0;


    printf ("Informe os 10 numeros do vetor:\n\n");
    for (pos = 0; pos < 10; pos++)
        scanf ("%d", &vet[pos]);

    for (pos = 0; pos < 10; pos++)
        {

        if (vet[pos] > 10 && vet[pos] < 20)
            cont1++;
        else if (vet[pos] < 10 || vet[pos] > 20)
            cont2++;
        }
    printf ("Quantidade de numeros que estao no intervalo de 10 a 20: %d\n\n", cont1 + 1);
    printf ("Quantidade de numeros que estao fora do intervalo: %d\n\n", cont2);




    return 0;
}

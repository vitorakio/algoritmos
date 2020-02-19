#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    int i;
    int vet[6];


    for (i = 0; i < 6; i++){
        printf ("Informe 6 elementos no vetor A:[%d]..:", i);
        scanf ("%d", &vet[i]);
    }


    for (i = 0; i < 6; i++)

        printf ("Espaco [%d] resultado [%d]\n", i, vet[i] / 4);



    return 0;
}

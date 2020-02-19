#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    int i;
    int vet1[10];
    int vet2[10];
    int vet3[10];


    for (i = 0; i < 10; i++)
        scanf ("%d", &vet1[i]);
    for (i = 0; i < 10; i++)
        scanf ("%d", &vet2[i]);

    for(i = 0;i < 10; i++)
    {
        vet3[i] = vet1[i] * vet2[i];
        printf ("A multiplicacao dos vetores: %d\n", vet3[i]);
    }



    return 0;
}

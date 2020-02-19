#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    int vet[20];
    int a;
    int pos = 0;


        printf ("Informe os numeros do vetor:\n\n");
    for (pos = 0; pos < 20; pos++)
        scanf ("%d", &vet[pos]);

        printf("Informe um valor pra saber se o valor informado esta dentro do vetor:\n\n");
            scanf("%d", &a);

    for(pos = 0;pos < 20;pos++)
		if(vet[pos]==a);

	printf ("O numero %d se encontra na posicao: %d", a, pos+1);
    return 0;
}

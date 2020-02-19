#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
    float vet[10], s;
	int pos;
    printf("Preencha o vetor com 10 elementos reais\n");
    for (pos = 0; pos < 10; pos++)
    {
       scanf("%f", &vet[pos]);
       s += vet[pos];
    }
    printf("%.2f ", s);
}        

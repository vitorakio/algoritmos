#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
    int vet[10];
    int pos;
    printf("Preencha o vetor com 10 elementos reais\n");
    for (pos = 0; pos < 10; pos++)
       scanf("%d", &vet[pos]);
       
    for (pos = 9; pos >= 0; pos--)
       printf("%d ", vet[pos]);
       
    system("pause");
}        

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
    int vet[10];
    int pos, valor;
    printf("Preencha o vetor com 10 elementos inteiros\n");
    for (pos = 0; pos < 10; pos++)
       scanf("%d", &vet[pos]);
       
    printf("Informe um numero a ser procurado no vetor\n");
    scanf("%d", &valor);
       
    pos = 0;   
    while ((valor != vet[pos]) && (pos < 10))
       pos++;
       
    if (pos == 10)
    printf("Elemento nao encontrado no vetor\n");
    else printf("Elemento encontrado na posicao %d\n", pos);       
       
    system("pause");
}        

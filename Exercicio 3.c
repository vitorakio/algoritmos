#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
    int vet[10], i, num;

    printf ("INFORME 10 NUMEROS INTEIROS:\n");
    for(i=0; i< 10; i++)
        scanf("%d", &vet[i]);
        printf ("i[%d]\n", i);


    printf ("Informe o elemento a ser procurado pelo vetor:\n");
        scanf ("%d", &num);

        i = 0;
        while ((num != vet[i]) && (i < 10)){
            i++;
        }
        if (i < 10){
            printf("O elemento foi encontrado na posicao [%d]", i);
        }
    }


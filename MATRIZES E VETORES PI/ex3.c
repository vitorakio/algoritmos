#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){

    int v[7], p, n, rep;


    printf("\nInforme 7 elementos:\n");
        for(p=0;p<7;p++){
        printf("[%d]", p+1);
        scanf("%d", &v[p]);
        }
do{
    printf("Informe um numero a ser pesquisado:");
    scanf("%d", &n);

    p=0;

        while(n != v[p] && p<7){
        p++;
        }

        if (n == v[p]){
        printf("Numero %d encontrado na posicao [%d]!", n, p+1);
        }
            else printf("\n\nNenhum numero encontrado!!\n\n");

    printf("\n\nRepetir!1-Sim 2-Nao\n");
        scanf("%d", &rep);
}
    while(rep == 1);
}

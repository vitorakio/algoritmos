#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main(){

int x[10], soma=0, t=0, n, media;


    printf("Informe 10 notas:\n");
    for(n=0;n<10;n++){
        printf("[%d]", n+1);
        scanf("%d", &n[x]);
        soma=soma+n[x];
    }


     media=soma/10;

     if(n[x] >= media){
        t++;
        printf("\n%d alcancaram a media!", t);
     }
     printf("\nMedia total da turma: %d", media);




}

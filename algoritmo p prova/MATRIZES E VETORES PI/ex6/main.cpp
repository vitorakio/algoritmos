#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    int matM[3][5], matN[5][3], i, j, soma1[3]={0}, soma2[3]={0}, soma_res[3]={0};


printf("\n\nMATRIZ M\n\n");
    for (i = 0; i < 3; i++){
    for(j = 0; j < 5; j++){

        printf("Digite o elemento [%d][%d] da Matriz M: ",i,j);
        scanf("%d",&matM[i][j]);
    }
    }


printf("\n\nMATRIZ N\n\n");
    for (i = 0; i< 5; i++){
    for(j = 0; j< 3; j++){

        printf("Digite o elemento [%d][%d] da Matriz N: ",i,j);
        scanf("%d",&matN[i][j]);
    }
    }

    for (i = 0; i < 3; i++){
    for(j = 0; j < 5; j++){
            soma1[i]= soma1[i]+matM[i][j];

    }
    }

    for (i = 0; i< 3; i++){
    for (j = 0 ;j < 5; j++){
            soma2[i]= soma2[i]+matM[j][i];

    }
    }

    for (i = 0; i < 3; i++){
            soma_res[i] = soma1[i]+soma2[i];

    }

    printf("\n\nSoma das linhas da Matriz M com as colunas da Matriz N:\n\n");
    for (i = 0;i < 3; i++){

            printf("%d ",soma_res[i]);
    }
    printf("\n");

    return 0;
}

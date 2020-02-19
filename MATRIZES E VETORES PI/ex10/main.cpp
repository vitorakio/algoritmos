#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    float mat[4][3];
    int i;
    int j;
    int maior;


    printf("\n\nMATRIZ M\n\n");
    for (i = 0; i < 4; i++){
    for(j = 0; j < 3; j++){

        printf("Digite o elemento [%d][%d] da Matriz: ",i,j);
        scanf("%f",&mat[i][j]);
    }
    }

    for (i = 0; i < 4; i++){
            maior = mat[i][0];
    for(j = 0; j < 3; j++)
        if (maior < mat[i][j])
            maior = mat[i][j];
    for(j = 0; j < 3; j++)
        mat[i][j] *= maior;
    }


    for (i = 0; i < 4; i++){
        printf("\n");
    for (j = 0; j < 3; j++)
        printf("\t%f", mat[i][j]);
    }
    return 0;
}

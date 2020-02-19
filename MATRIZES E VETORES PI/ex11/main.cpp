#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    float mat[3][3];
    int i;
    int j;


    printf("\n\nMATRIZ M\n\n");
    for (i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){

        printf("Digite o elemento [%d][%d] da Matriz: ",i,j);
        scanf("%f",&mat[i][j]);
    }
    }

    for (i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
        if (i != j)
            mat[i][j] = mat[i][j] * mat [i][i];
    }
    }

    for (i = 0; i < 3; i++){
        printf (" \n");
    for(j = 0; j < 3; j++){
        printf ("%f\t", mat[i][j]);
    }
    }
    return 0;
}

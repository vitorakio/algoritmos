#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    int mat[5][5];
    int i;
    int j;
    int maior;
    int lin_maior;
    int minimax;
    int col_menor;
    int min_max;

    for (i = 0; i < 5; i++){
    for (j = 0; j < 5; j++){
    printf("Informe a matriz: [%d][%d]: ", i, j);
    scanf("%d", &mat[i][j]);
    }
    }

    maior = mat[0][0];
    for (i = 0; i < 5; i++){
    for (j = 0; j < 5; j++){
        if (maior < mat[i][j])
            maior = mat[i][j];
    lin_maior = i;
    }
    }

    minimax = mat[lin_maior][0];
    for (j = 1; j < 10; j++)
    if (minimax > mat[lin_maior][j]){
            min_max = mat[lin_maior][j];
            col_menor = j;
    }

    printf("\nMinimax\tA[%d][%d]: %d\n", lin_maior, col_menor, minimax);


    return 0;
}

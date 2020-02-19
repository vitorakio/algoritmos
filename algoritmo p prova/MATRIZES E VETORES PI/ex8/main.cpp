#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    int matA[4][3];
    int i;
    int j;
    int rep = 0;

    printf ("\nPreencha a matriz:\n");
        for (i = 0; i < 4; i++){
        for (j = 0; j < 3; j++){

    printf("Digite o elemento [%d][%d] da Matriz: ",i,j);
        scanf("%d",&matA[i][j]);
        }
        }

        for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++)

            for (i = 0; i < 4; i++)
            for (j = 0; j < 3; j++)
                if (matA[i] == matA[j])
                    rep = matA[i]==matA[j];


        printf ("Os elementos repetidos em A sao:%d\n\t", rep);











    return 0;
}

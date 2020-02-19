
#include <iostream>
#include <stdio.h>
#include <conio.h>



using namespace std;


int main()
{
    float mat[3][3];
    int multi;
    int i;
    int j;
    float total;

   printf("\n\nMATRIZ M\n\n");
    for (i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){

        printf("Digite o elemento [%d][%d] da Matriz: ",i,j);
        scanf("%f",&mat[i][j]);
    }
    }




    printf ("Informe um numero que deseja multiplicar a matriz:");
    scanf ("%d", &multi);

    for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){

    total = multi * mat[i][j];

     printf ("A multiplicacao da matriz e:%f\n", total);
    }
    }

    return 0;
}

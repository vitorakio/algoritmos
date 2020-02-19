#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    int i, j, somai, somaj, p;
    int mat[5][5];
    int veti[5], vetj[5];

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf ("Preencha o vetor: [%d][%d]", i, j);
            scanf("%d", &mat[i][j]);
        }
    }






    for (i = 0; i < 5; i++)
    {
        somai = 0;
        for (j = 0; j < 5; j++)
            somai += mat[i][j];
        veti[i] = somai;
    }

    printf ("\n");
    printf ("A soma das linhas:\n");
    for(p = 0; p < 5; p++)
        printf ("%d  ", veti[p]);







    for (i = 0; i < 5; i++)
    {
        somaj = 0;
        for (j = 0; j < 5; j++)
            somaj += mat[j][i];
        vetj[i] = somaj;
    }
    printf ("\n");
    printf ("A soma das colunas:\n");
    for(p = 0; p < 5; p++)
        printf ("%d  ", vetj[p]);

    return 0;
}

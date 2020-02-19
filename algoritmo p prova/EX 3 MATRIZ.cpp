#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
    int mat[3][5], l, c, cont = 0;
    printf("Preencha a matriz com 15 elementos\n");
    for (l = 0; l < 3; l++)
       for (c = 0; c < 5; c++)
          scanf("%d", &mat[l][c]);
          
    for (l = 0; l < 3; l++)
       for (c = 0; c < 5; c++)
          if ((mat[l][c] >= 15) && (mat[l][c] <= 20))
          cont++;
          
    printf("\n");   

    printf("A quantidade de elementos entre 15 e 20 = %d\n", cont);
    system("pause");
}        

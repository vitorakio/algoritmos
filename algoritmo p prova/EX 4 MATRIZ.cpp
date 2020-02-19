#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
    int mat[3][3], l, c, maior, menor;
    printf("Preencha a matriz com 9 elementos\n");
    for (l = 0; l < 3; l++)
       for (c = 0; c < 3; c++)
          scanf("%d", &mat[l][c]);
          
    maior = mat[0][0];      
    menor = mat[0][0];      
    for (l = 0; l < 3; l++)
       for (c = 0; c < 5; c++)
          if (mat[l][c] > maior)
          maior = mat[l][c];
          else if (mat[l][c] < menor)
          menor = mat[l][c];
          
    printf("\n");   

    printf("Maior = %d\n", maior);
    printf("Menor = %d\n", menor);
    system("pause");
}        

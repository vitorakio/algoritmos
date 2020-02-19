#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
main()
{
    char nome[20], nome2[20];

    printf ("Informe seu nome:");
    gets(nome);
    printf("\nInforme o nome novamente:");
    gets(nome2);



    if(strcmp(nome, nome2)==0){
        printf("Os dois nomes sao iguais!!!!");
    }
    else{
        printf("Os dois nomes estao diferentes!!!");
    }
}

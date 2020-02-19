#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    int pessoas, qhmaior, qmmenor;

    printf("Informe a quantidade de alunos na sala:");
    scanf("%d", &pessoas);

    qhmaior = pessoas-(40*pessoas)/100;
    qmmenor = pessoas-(80*pessoas)/100;

    printf("\nQuantidade de homens maiores de idade:..%d", qhmaior);
    printf("\nQuantidade de mulheres menores de idade:%d", qmmenor);
}

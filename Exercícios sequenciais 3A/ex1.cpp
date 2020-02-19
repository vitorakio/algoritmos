#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    char nome[25], endereco[25];
    int telefone;

    printf("Informe seu nome:");
    scanf("%s", &nome);
    printf("Informe o endereco:");
    scanf("%s", &endereco);
    printf("Informe o telefone:");
    scanf("%d", &telefone);

    printf("O nome informado: %s", nome);
    printf("\nO endereco informado: %s", endereco);
    printf("\nO telefone informado: %d", telefone);
}

#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

main()
{

float salario, vendas, comissao, total;
char nome[50];

printf ("Informe o nome do vendedor:");
scanf ("%s", &nome);
printf ("Informe o valor das vendas(somadas): R$");
scanf ("%f", &vendas);
printf ("Informe o salario do vendedor: R$");
scanf ("%f", &salario);
printf ("Informe o percentual de ganho sobre as vendas:");
scanf ("%f", &comissao);


total = salario + ((vendas*comissao)/100);


printf ("O funcionario, %s, teve um salario final de %.2f", nome, total);

getch();
}

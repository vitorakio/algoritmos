#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
//12*4/10
//5*0,2
main()
{
	float ovo, farinha, acucar, creme, leite, total_ovo, total_far, total_acucar, total_leite, total_bolo;
	
	printf ("Informe o preço dos ovos:\n");
	scanf ("%f", &ovo);
	printf ("Informe o preço do Kg de farinha:\n");
	scanf ("%f", &farinha);
	printf ("Informe o preço acúcar:\n");
	scanf ("%f", &acucar);
	printf ("Informe o preço da lata de creme de leite:\n");
	scanf ("%f", &creme);
	printf ("Informe o preço do litro de leite:\n");
	scanf ("%f", &leite);
	
	total_ovo = (12*4)/(ovo);
	total_acucar = (acucar * 0.2);
	total_leite = (leite * 1.5);
	
	total_bolo = total_ovo + total_acucar + (creme*2) + total_leite;
	
	printf ("O valor total do bolo: R$%.2f", total_bolo);
	
	
	getch();
}

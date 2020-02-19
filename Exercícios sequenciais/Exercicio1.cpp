#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
	char nome[100], endereco[100];
	int tel;

	printf ("Informe o nome:");
		scanf ("%s", &nome);
	printf ("Informe o endereco:");
		scanf ("%s", &endereco);
	printf ("Informe o telefone:");
		scanf ("%d", &tel);


		printf ("\nNOME: %c", nome);
		printf ("\nENDERECO: %s", endereco);
		printf ("\nTELEFONE: %d", tel);

	getch();


}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
	int unit, quant;
	float troco, valor, bilhtotal;
	
	printf ("Informe o tipo de bilhete");
	printf ("\n1 - Unitario");
	printf ("\n2 - Bilhete duplo");
	printf ("\n3 - Bilhete de 10 viagens\n");
	scanf ("%d", &unit);
	if (unit == 1)
	{
		printf ("Informe a quantidade de bilhetes:");
		scanf ("%d", &quant);
		printf ("Informe o valor que o cliente deu:");
		scanf ("%f", &valor);
		bilhtotal = quant * 1.30;
		troco = valor - (quant * 1.30);
		printf ("O cliente comprou %d bilhetes no valor total de R$ %.2f com o troco de R$ %.2f", unit, bilhtotal, troco);
	}
	else
	if (unit == 2)
	{
		printf ("Informe a quantidade de bilhetes:");
		scanf ("%d", &quant);
		printf ("Informe o valor que o cliente deu:");
		scanf ("%f", &valor);
		bilhtotal = quant * 2.60;
		troco = valor - (quant * 2.60);
		printf ("O cliente comprou %d bilhetes no valor total de R$ %.2f com o troco de R$ %.2f", unit, bilhtotal, troco);

	}
	else
	if (unit == 3)
	{
		printf ("Informe a quantidade de bilhetes:");
		scanf ("%d", &quant);
		printf ("Informe o valor que o cliente deu:");
		scanf ("%f", &valor);
		bilhtotal = quant * 12;
		troco = valor - (quant * 12);
		printf ("O cliente comprou %d bilhetes no valor total de R$ %.2f com o troco de R$ %.2f", unit, bilhtotal, troco);

	}
	getch;
}

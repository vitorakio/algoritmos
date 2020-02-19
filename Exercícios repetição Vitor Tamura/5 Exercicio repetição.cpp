#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
	int idade = 0, cont, total = 0;
	float perc;

	printf("Informe a idade:\n");

	for (cont = 0; cont < 5; cont++)
	{
		scanf("%d", &idade);
		if (idade >= 60)
			total++;
	}
	perc = (total * 10)/100;
	printf ("%.2f porcento sao maiores de 60 anos.", perc);
}

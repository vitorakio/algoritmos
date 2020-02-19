#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
	int  cont = 0;
	float num, soma = 0, media = 0;
	printf ("Informe numeros e digite um maior que 100 para encerrar:");
	scanf ("%f", &num);
	while (num <= 100)
	{
		soma = soma + num;
		cont++;
		scanf ("%f", &num);
    }
    if (cont > 0) media = soma / cont;
	printf ("A media dos numeros:%.2f", media);
}

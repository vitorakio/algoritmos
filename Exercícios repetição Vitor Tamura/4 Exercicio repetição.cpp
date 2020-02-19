#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){
	int cont=0, soma=0;

	while (cont < 100)
	{
		cont++;
		soma = soma + cont;
		cont++;
	}
	printf ("%d", soma);
}

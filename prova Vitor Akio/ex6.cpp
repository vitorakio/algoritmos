#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

main()


{
	int cont, num, primo;

	printf ("Informe 10 numeros:");
	for (cont=0; cont<5; cont++){
		scanf ("%d", &num);
		if (num % 2 == 1){
			primo = cont;
		}
	}
	printf ("Voce informou %d numeros primos.", primo);
}

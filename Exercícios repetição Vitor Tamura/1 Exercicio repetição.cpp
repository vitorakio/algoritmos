#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){
	int cont, num, soma=0;


	printf ("Informe dez numeros reais:\n");
		
	for (cont=0; cont<10; cont++)
	{
		scanf("%d", &num);
		soma = soma + num;
	}
		printf("%d", soma);


}


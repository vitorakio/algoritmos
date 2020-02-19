#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){
	int cont, num, multi;
	
	printf ("Informe um numero:");
	scanf ("%d", &num);
	for (cont=0; cont<11; cont++)
	{
		multi = num * cont;
		printf ("%d x %d = %d\n", cont, num, multi);
	}
}

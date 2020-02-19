#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

main(){
	int pot, num, cont, total;
	
	printf ("Informe um numero que deseja elevar:");
	scanf ("%d", &pot);
	printf ("Informe um numero inteiro:");
	scanf ("%d", &num);
	
	for (cont=0; cont<pot; cont++){
		total = num * pot;
	}
	printf ("%d", total);
}

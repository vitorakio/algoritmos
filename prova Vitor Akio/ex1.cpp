#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

main(){

int soma, divi, num;

printf ("Informe um numero inteiro:\n");
scanf ("%d", &num);

for (divi=0; divi < 10; divi++){
	if (num % 2 == 0){
		soma = soma + divi;
	}

}
printf ("A soma dos divisores: %d\n", soma);
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){

	float sombra, sombra_predio, altura_p;

	printf ("Informe a medida da sua sombra:");
	scanf ("%f", &sombra);
	printf ("Informe a medida da sombra do predio:");
	scanf ("%f", &sombra_predio);

	altura_p = (sombra_predio / sombra) * 2;

	printf ("A altura do predio eh de: %.2f metros.", altura_p);

	getch;
}

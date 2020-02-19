#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

main()
{
	float valor, desconto, total;
	
	printf ("Informe o valor do produto: R$");
		scanf("%f", &valor);
	
	desconto = valor * 10 / 100;
	
	
	
	printf ("O valor total do produto com desconto: R$%2.f", (desconto = valor - desconto));
	
	getch();
	
}


#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

main(){
	float div, cont, total, s, soma;

	for (cont=5; cont<250; cont++){
		for (div=0; div<50; div++)
		total = cont/div;
			for (s=0; s<50; s++){
				soma = total+total;
			}
	}
	printf("%.3f", total);
}

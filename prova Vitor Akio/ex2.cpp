#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

main(){
	int num, par=0, impar=0, soma=0, multi;
	float perc_impar=0;

	printf ("Informe cinco numeros inteiros:");

		do{
			scanf("%d", &num);


				if(num % 2 == 0){
					par++;
				}
				if (num % 2 == 1){
					impar++;
					multi = impar * impar;
					perc_impar = multi/100;
				}
				if (num % 7 == 0){
					soma = soma + num;
				}



	 	}while (num != 0);
	printf ("Quantidade de numeros pares: %d\n", par);
	printf ("Percentual numeros impares: %2.f\n", perc_impar);
	printf ("Soma dos numeros divisiveis por 7: %d\n", soma);

}


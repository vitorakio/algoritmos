#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int espir, cori, ddc;
	float temp;
	int soma;
	char nome[50];

	printf ("Informe o nome do paciente:");
	gets(nome);

	printf ("\n Informe seus sintomas: 1 para sim, 0 para nao:\n");

	printf ("\nTem espirros?");
		scanf ("%d", &espir);
	printf ("\nTem coriza?");
		scanf ("%d", &cori);
	printf ("\nTem dor de cabeca");
		scanf ("%d", &ddc);
	printf ("\nInforme a temperatura:");
		scanf ("%f", &temp);

	if (temp >= 36.5 || temp <= 37){
		temp = 0;
	}
	else temp = 1;

	soma = espir + cori + ddc + temp;

	if (soma == 1){
		printf ("\nO paciente esta gripado.\n");
	}
        else if (soma == 4){
            printf ("\nO paciente esta com pneumonia.\n");
	}
           else if (cori == 1 && espir == 1 && ddc == 0 && temp == 0){
                printf ("\nCara ta com resfriado.\n");
	}
                else if (soma == 3 && temp == 0){
                    printf ("\nO paciente esta com bronquite.\n");
	}
                    else printf ("\nDiagnostico indefinido.\n");
}

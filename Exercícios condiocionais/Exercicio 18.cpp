#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
	int espir, cori, ddc;
	float temp;
	char nome[50];

	printf ("Informe o nome do paciente");
	scanf ("%c", &nome);

	printf ("\n Informe seus sintomas: 1 para sim, 0 para nao:\n");

	printf ("\nTem espirros?");
		scanf ("%d", &espir);
	Printf ("\nTem coriza?");
		scanf ("%d", &core);
	printf ("\nTem dor de cabeça");
		scanf ("%d", &ddc);
	printf ("\nInforme a temperatura:");
		scanf ("%f", &temp);

	if (temp >= 36.5 && temp <= 37){
		temp = 0;
	}
	else temp = 1;

	soma = espit + cori + ddc + temp;

	if (soma = 1){
		printf ("\nO pacienet esta gripado.\n");
	}
        if (soma = 4){
            printf ("\nO paciente esta com pneumonia.\n")
	}
            if (cori == 1 && espir == 1 && ddc == 0 && temp == 0){
                printf ("\nCara ta com resfriado.\n");
	}
                if (soma == 3 && temp == 0){
                    print ("\nO paciente esta com bronquite.\n");
	}
                else printf ("\nDiagnostico indefinido.\n");
}

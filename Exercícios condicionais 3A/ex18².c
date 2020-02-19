#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	float temp;
	int soma=0, soma2=0;
	char nome[50], espir[2], cori[2], ddc[2], s[2];

	printf ("Informe o nome do paciente:");
	gets(nome);

	printf ("\n Informe seus sintomas: S para sim, N para nao:\n");

	printf ("\nTem espirros?");
		gets(espir);
	printf ("\nTem coriza?");
		gets(cori);
	printf ("\nTem dor de cabeca");
		gets(ddc);
	printf ("\nInforme a temperatura:");
		scanf ("%f", &temp);


		if (espir == "s"){
            soma++;
            soma2++;
		}
            if(cori == "s"){
                soma++;
                soma2++;
            }
                if(ddc == "s"){
                    soma++;
                }
                    if (temp <= 36.5 || temp >= 37){
                        soma++;
                    }
                        if(soma == 1){
                            printf("GRIPE!");
                        }
                        else if(soma == 4){
                            printf("PNEUMONIA");
                        }
                            else if (soma2 == 2){
                                printf("RESFRIADO");
                            }
                                else if (soma == 3 && temp>=36.5 && temp<=37){
                                    printf("BRONQUITE");
                                }
                                    else printf("DIAGNOSTICO INDEFINIDO");
}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    float vdiaria, vprom, v80dp, v50dn, ocup80, ocup50;

    printf("Informe o valor da diaria:");
    scanf("%f", &vdiaria);

    vprom = vdiaria-(vdiaria*25)/100;
    ocup80 = ((75*80)/100);
    v80dp = vprom*ocup80;
    //
    ocup50 = (75*50)/100;
    v50dn = vdiaria*ocup50;

    printf("\nValor da diaria normal.........................................:R$%.2f", vdiaria);
    printf("\nValor da diaria promocional....................................:R$%.2f", vprom);
    printf("\nValor total arrecadado com 80 de ocupacao c/ diaria promocional:R$%.2f", v80dp);
    printf("\nValor total arrecadado com 50 de ocupacao c/ diaria normal.....:R$%.2f", v50dn);


    if (v80dp > v50dn){
        printf("\nA diaria normal eh mais rentavel!!!");
    }
    else printf("\nA diaria promocional eh mais rentavel!!!");

}

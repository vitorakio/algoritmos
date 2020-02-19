  #include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int tip_bilh, qt_bilh;
    float valor, troco;

    printf("Informe o tipo de bilhete:");
    printf("\n1- Para unitario");
    printf("\n2- Para duplo");
    printf("\n3- Para 10 viagens\n");
    scanf("%d", &tip_bilh);
    printf("\nInforme o valor pago:");
    scanf("%f", &valor);

    if(tip_bilh==1){
        qt_bilh=valor/1.30;
        troco=valor-(1.30*qt_bilh);
    }
    else if(tip_bilh==2){
        qt_bilh=valor/2.60;
        troco=valor-(2.60*qt_bilh);
    }
    else if(tip_bilh==3){
        qt_bilh=valor/12;
        troco=valor-(12*qt_bilh);
    }

    printf("\nO usuario pode ter %d bilhetes", qt_bilh);
    printf("\nO troco a ser recebido: R$%.2f", troco);
}

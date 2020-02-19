 #include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    int cont, idade=0, mmi=0;
    float perc;

    printf("Informe a idade:");

    for(cont=0;cont<10;cont++){
        scanf("%d", &idade);
        if(idade >= 60){
            mmi++;
        }
    }
    perc = (mmi*100)/10;
    printf("\n%.2f porcento tem mais de 60 anos.", perc);
}

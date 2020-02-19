#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){
    int cont_d, n, soma_p, i;


    printf("Informe um numero:");
    scanf("%d", &n);

    do{
        cont_d = 0;
            for(i=1;n/2;i++){
                if(n % i == 0){
                    cont_d++;
                }
    }
    if(cont_d == 1){
        soma_p = soma_p + n;
    }
        printf("%d", soma_p);
        scanf("%d", &n);

    }while(n != -1);
}


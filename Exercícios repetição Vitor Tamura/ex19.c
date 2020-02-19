#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){
    int cont_d, n, soma_p=0, i;


    printf("Informe um numero:");
    scanf("%d", &n);

    do{
    cont_d = 0;
        for(i=1; n/2 >= i; i++){
            if(n % i == 0){
                cont_d++;

            }
        }
    if(cont_d == 1){
        soma_p = soma_p + n;
    }
        printf("Informe um numero:");
        scanf("%d", &n);

    }while(n != -1);

    printf("\nsoma primos: %d\n", soma_p);
}

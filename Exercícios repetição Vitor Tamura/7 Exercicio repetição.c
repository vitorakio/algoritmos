#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
    int cont, num, soma=0, somapar, x;


        printf ("Informe quantos numeros deseja ler:");
        scanf ("%d", &cont);
        printf ("Informe %d numeros:\n", cont);

        for (x=0; x < cont; x++)
        {
            scanf ("%d", &num);
            if(num % 2 == 0){
                soma = soma + num;
            }
        }
        printf("A soma dos numeros pares: %d", soma);

}

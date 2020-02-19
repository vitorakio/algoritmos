#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int num;

    printf("Informe um numero:");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0){
        printf("O numero eh divisivel por 3 e 7");
    }
    else printf("O numero nao eh divisivel por 3 e 7");
}

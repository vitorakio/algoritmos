#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
int cont, num, total = 0;

printf ("Informe 10 numeros reais:");


for (cont=0;cont<10;cont++){

    scanf ("%d", &num);

    total = total + num;

}

printf ("A soma dos numeros: %d", total);



getch();

}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main()
{
float mil, seg, ter, qua, qui, sex, soma;

printf ("Informe a quantidade de polegadas que caiu na ultima semana:");
printf ("\nSegunda-feira:");
scanf ("%f", &seg);
printf ("Segunda-feira [%.2f]\n", seg);

printf ("\nTerca-feira:");
scanf ("%f", &ter);
printf ("Terca-feira [%.2f]\n", ter);

printf ("\nQuarta-feira:");
scanf ("%f", &qua);
printf ("Quarta-feira [%.2f]\n", qua);

printf ("\nQuinta-feira:");
scanf ("%f", &qui);
printf ("Quinta-feira [%.2f]\n", qui);

printf ("\nSexta-feira:");
scanf ("%f", &sex);
printf ("Sexta-feira [%.2f]\n", sex);

soma = (seg + ter + qua + qui + sex);
printf ("\nSoma [%.2f]", soma);
mil = (soma * 25.4);

printf ("\nA quantidade de milimetros que choveu na ultima semana = [%.2f]Mm's", mil);

getch();

}


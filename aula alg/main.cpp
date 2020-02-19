#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


//Leia 10 números inteiros positivos e armazene em um vetor. Em seguida determine e imprima o maior elemento no vetor.

using namespace std;
main()

{
    setlocale (LC_ALL, "Portuguese");

    int v[10], i, maior;



    for (i = 1; i < 10; i++)
        scanf ("d%", &v[i]);
        maior = 0;


   {
       for (i = 1, i < 10; i++)
        if (v[i] > maior)
           {
            maior = v[i];
           }
    printf ("%f","A maior altura foi de: ",&maior);
    }

system ("pause");
return 0;


}

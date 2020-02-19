#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){

    int cont, pd=0, sg=1, r=0;

    printf("\n0\n");
    printf("\n1\n");

    for(cont=0;cont<50;cont++){

        r = pd + sg;
        pd = sg;
        sg = r;
        printf("\n%d\n", r);
    }

}

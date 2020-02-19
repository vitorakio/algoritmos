#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    float sal, novo_sal;
    int rep=0;

    do{
    printf("Informe o salario do funcionario:");
    scanf("%f", &sal);

    if (sal<=800){
        novo_sal=sal+((sal*10)/100);
    }
    else if (sal>=800 && sal<=1500){
        novo_sal=sal+((sal*7.5)/100);
    }
    else if (sal>=1500){
        novo_sal=sal+((sal*5)/100);
    }

    printf("\nO novo salario do funcionario:R$%.2f",novo_sal);
    printf("\nDeseja ler um novo salario?1-Sim 2-Nao\n");
    scanf("%d", &rep);

    }while(rep==1);

}

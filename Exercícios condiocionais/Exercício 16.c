#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main()
{
    char nome[100];
    int salb, dep, val_d, sal_liq, desc;

    printf ("Informe o nome do funcionario:\n");
    gets(nome);
    printf ("Informe o salario bruto:\n");
    scanf ("%d", &salb);
    printf ("Informe o numero de dependentes:\n");
    scanf ("%d", &dep);

    if (salb > 700)
    {
        val_d = ((salb*10)/100);
        desc = salb - val_d;
        sal_liq = (desc+(dep * 15) + 40 + 100);

    printf ("O nome do funcionario: %s\n", nome);
    printf ("O salario liquido do funcionario: R$ %d\n", sal_liq);
    }
    else
    if (salb >= 301)
    {
        val_d = (salb * 9)/100;
        desc = salb - val_d;
        sal_liq = (desc+(15 * dep) + 40 + 100);

    printf ("O nome do funcionario: %s\n", nome);
    printf ("O salario liquido do funcionario: R$ %d\n", sal_liq);

    }
    else
    {
        val_d = (salb * 8)/100;
        desc = salb - val_d;
        sal_liq = (desc+(15 * dep) + 40 + 100);

    printf ("O nome do funcionario: %s\n", nome);
    printf ("O salario liquido do funcionario: R$ %d\n", sal_liq);
    }


getch;


}

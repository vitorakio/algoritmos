#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int qt_maca;
    float p_duzia;

    printf("Informe a quantidade de macas compradas:");
    scanf("%d", &qt_maca);

    if (qt_maca<12){
        p_duzia = qt_maca * 0.80;
    }
    else if (qt_maca>12){
        p_duzia = qt_maca * 0.70;
    }

    printf("O preco a pagar pelas macas: R$%.2f", p_duzia);

}

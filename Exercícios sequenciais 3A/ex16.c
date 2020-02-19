#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    int eleit, vbranco, nulo, val, nvot;
    float pbranco, pnulo, pval, pnvot;

    printf("Informe o numero de eletiores:");
    scanf("%d", &eleit);
    printf("Votos em branco:");
    scanf("%d", &vbranco);
    printf("Votos nulo:");
    scanf("%d", &nulo);
    printf("Votos validos:");
    scanf("%d", &val);

    pbranco = ((vbranco*100)/eleit);
    pnulo = ((nulo*100)/eleit);
    pval = ((val*100)/eleit);
    nvot = eleit-(vbranco+nulo+val);
    pnvot = ((nvot*100)/eleit);

    printf("Percentual votos em branco:%.1f ", pbranco);
    printf("\nPercentual votos nulos:%.1f ", pnulo);
    printf("\nPercental votos validos:%.1f ", pval);
    printf("\nPercentual nao votaram:%.1f ", pnvot);
}

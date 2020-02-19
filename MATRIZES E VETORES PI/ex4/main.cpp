#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    int i;
    int pos1[20];
    int pos2[20];

    for (i = 0; i < 20; i++)
        scanf ("%d", &pos1[i]);
    for (i = 0; i < 20; i++)
        scanf ("%d", &pos2[i]);
    for (i = 0; i < 20; i++)
        print ("\n\n")
        printf("%d\n",pos1[i]*pos2[i]);


    return 0;
}

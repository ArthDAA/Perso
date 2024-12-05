#include <stdio.h>

void graph(int cmptr);                                  //L03

int main()
{
    int valeur;

    valeur = 2;

    while(valeur <= 64)
    {
        graph(valeur);                                  //L13
        printf("La valeur est %d\n", valeur);
        valeur = valeur * 2;
    }
    return (0);
}

void graph(int cmptr)                                   //L20
{
    int x;
    for(x = 0; x < cmptr; x++)
    putchar('*');
    putchar('\n');
}

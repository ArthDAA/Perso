#include <stdio.h>

void graph(int cmptr, int character);

int main()
{
    int valeur;

    valeur = 2;

    while(valeur <= 64)
    {
        graph(valeur, 'i');
        printf("La valeur est %d\n", valeur);
        valeur = valeur * 2;
    }
    return (0);
}

void graph(int cmptr, int character)
{
    int x;
    for(x = 0; x < cmptr; x++)
        putchar(character);
        putchar('\n');
}

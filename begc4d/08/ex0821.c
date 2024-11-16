#include <stdio.h>

int main()
{
    int a, b, leplusgrand;

    printf("Indiquez une valeur A : ");
    scanf("%d", &a);
    printf("Indiquez une valeur b : ");
    scanf("%d", &b);

    leplusgrand = (a > b) ? a : b;                                      //L12
    printf("La valeur %d est plus grande.\n", leplusgrand);
    return (0);
}
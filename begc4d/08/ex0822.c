#include <stdio.h>

int main()
{
    int a, b;

    printf("Indiquez une valeur A : ");
    scanf("%d", &a);
    printf("Indiquez une valeur b : ");
    scanf("%d", &b);

    if (a > b)
        printf("La valeur %d est plus grande.\n", a);

    else if (b > a)
        printf("La valeur %d est plus grande.\n", b);
        
    else
        printf("La valeur %d est plus grande.\n", a);

    return (0);
}
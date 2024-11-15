#include <stdio.h>

int main()
{
    int a, b;

    a = 6;
    printf("Valeur de b ? ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("%d est plus grand que %d\n", a, b);
    }
    else
    {
        printf("%d n'est pas plus grand que %d\n", a, b);
    }
    return (0);
}
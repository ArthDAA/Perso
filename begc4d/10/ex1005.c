#include <stdio.h>

void vegas(void);

int main()
{
    int a;
    a = 365;
//L09
    printf("Dans la fonction main(), a=%d\n", a);
    vegas();
    printf("De retur dans main (), a=%d\n", a);
//L12
    return (0);
}

void vegas(void)
{
    int a;                  //Variable locale

    a = -10;
//L20
    printf("Dans la fonction vegas(), a=%d\n", a);
}
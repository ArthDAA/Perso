#include <stdio.h>

int main()
{
    int duo;

    for(duo = 2; duo <= 100; duo = duo + 2)
    {
        printf("%d\t", duo);                    //L09
    }
    putchar('\n');                              //L11
    return (0);
}
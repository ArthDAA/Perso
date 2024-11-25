#include <stdio.h>

int main()
{
    int duo;

    for(duo = 3; duo <= 100; duo = duo + 3)
    {
        printf("%d\t", duo);                    //L09
    }
    putchar('\n');                              //L11
    return (0);
}
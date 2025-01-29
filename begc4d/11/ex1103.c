#include <stdio.h>

int main()
{
    int i;
    i = -5;

    while (i != 5)
    {
        printf("%d ", i);
        i++;
    }
    while (i != -6)
    {
        printf("%d ", i);
        i--;
    }
    putchar('\n');
}
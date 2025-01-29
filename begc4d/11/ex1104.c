#include <stdio.h>

#define beg -10
#define loop 10

int main()
{
    int i;
    i = beg;

    while (i != loop)
    {
        printf("%d ", i);
        i++;
    }
    while (i != beg - 1)
    {
        printf("%d ", i);
        i--;
    }
    putchar('\n');
}
#include <stdio.h>

int main()
{
    int c;
    int d;
    int e;

    printf("J'attends trois lettres : ");
    c = getc(stdin);
    d = getc(stdin);
    e = getc(stdin);
    printf("Les trois lettres sont '%c', '%c', et '%c'\n", c, d, e);
    return (0);
}
#include <stdio.h>

int main()
{
    int ch;

    printf("frappez entree : ");
    getchar();                      //L08
    ch = 'H';
    putchar(ch);
    ch ='i';
    putchar(ch);
    putchar('!');
    putchar('\n');
    return (0);
}
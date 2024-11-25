#include <stdio.h>

int main()
{
    char alphabet;

    for(alphabet = 'A'; alphabet <= 'Z'; alphabet++)
    {
        printf("%c", alphabet);                             //L09
    }
    putchar('\n');
    return (0);
}
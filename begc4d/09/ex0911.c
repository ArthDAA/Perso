#include <stdio.h>

int main()
{
    int alpha, code;

    for(alpha = 'A'; alpha <= 'G'; alpha++)                 //L07
    {
        for(code = 1; code <=7; code++)
        {
            printf("%c%d  ", alpha, code);                  //L11
        }
        putchar('\n');                                      //Saut de ligne final L13
    }
    return (0);
}

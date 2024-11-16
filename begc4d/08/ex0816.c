#include <stdio.h>

int main()
{
    char rep;
    printf("Vrai ou faux ? Y/n ");
    scanf("%c", &rep);
    if(rep == 'Y')
    {
        puts("C'etait donc vrai...");
    }
    else if(rep == 'n')
    {
        puts("Mais nan ct faux?");
    }
    else
    {
        puts("recommence stp, je t'ai dit de choisir entre Y et n...");
    }
    return (0);
}
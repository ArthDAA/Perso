#include <stdio.h>

void limiter(int stop);
_Bool verifier(int number);

int main()
{
    int s;
    printf("Indiquez une valeur pour stopper (0 - 100) : ");
    scanf("%d", &s);
    if(verifier(s) == 0)
    {
        puts("Tricheur !");
        return(1);
    }
    limiter(s);
    return (0);
}

void limiter(int stop)
{
    int x;

    for(x = 0; x <= 100; x++)
    {
        printf("%d ", x);
        if(x == stop)
        {
            puts("Vous gagnez !");
            return;
        }
    }
    puts("Je gagne !");
}

_Bool verifier(int number)
{
    if(number >= 0 && number <= 100)
        return(1);
    else
        return (0);
}
#include <stdio.h>

void limiter(int stop);

int main()
{
    int s;
    printf("Indiquez une valeur pour stopper (0 - 100) : ");
    scanf("%d", &s);
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
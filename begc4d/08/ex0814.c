#include <stdio.h>

int main()
{
    int coordonnee;

    printf("Coordonees de la cible : ");
    scanf("%d", &coordonnee);
    if (coordonnee >= -5 && coordonnee <= 5)        //L09
    {
        puts("Assez proche !");
    }
    else
    {
        puts ("La cible est encore loin !");
    }
    return (0);
}
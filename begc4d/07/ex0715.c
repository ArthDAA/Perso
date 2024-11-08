#include <stdio.h>

int main()
{
    float fav;

    printf("Saisissez votre chiffre favori : ");
    scanf("%f", &fav);
    printf("%f est mon chiffre favori aussi !\n", fav);
    return(0);
}
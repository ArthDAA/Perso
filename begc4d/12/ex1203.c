#include <stdio.h>

int main()
{
    int scoremax[4];

    printf("Votre meilleur score : ");
    scanf("%d", &scoremax[0]);
    printf("Votre 2nd score : ");
    scanf("%d", &scoremax[1]);
    printf("Votre 3e score : ");
    scanf("%d", &scoremax[2]);
    printf("Votre 4e score : ");
    scanf("%d", &scoremax[3]);

    puts("\nVoici vos meilleurs scores");
    printf("#1 %d\n", scoremax[0]);
    printf("#2 %d\n", scoremax[1]);
    printf("#3 %d\n", scoremax[2]);
    printf("#4 %d\n", scoremax[3]);

    return (0);
}
#include <stdio.h>

int main()
{
    int scoremax1, scoremax2, scoremax3, scoremax4;

    printf("Votre meilleur score : ");
    scanf("%d", &scoremax1);
    printf("Votre 2nd score : ");
    scanf("%d", &scoremax2);
    printf("Votre 3e score : ");
    scanf("%d", &scoremax3);
    printf("Votre 4e score : ");
    scanf("%d", &scoremax4);

    puts("\nVoici vos meilleurs scores");
    printf("#1 %d\n", scoremax1);
    printf("#2 %d\n", scoremax2);
    printf("#3 %d\n", scoremax3);
    printf("#4 %d\n", scoremax4);

    return (0);
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned)time(NULL));
    int devinessai;
    int SECRET = rand();
    while(SECRET >= 11)
    {
        SECRET %= 11;
    }
    printf("Tentez de deviner le chiffre secret entre 0 et 10 : ");

    int i = 0;
    while(i != 3)
    {
        scanf("%d", &devinessai);
        if(devinessai == SECRET)
        {
            puts("Bravo !");
            return (0);
        }
        else if(devinessai != SECRET)
        {
            printf("\nNon, ce n'est pas cela ! Il te reste %d essais.\n", -i + 2);
            i++;
        }
    }
    printf("\nPerdu! La reponse etait : %d!\n", SECRET);
}
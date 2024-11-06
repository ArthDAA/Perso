#include <stdio.h>

int main()
{
    char prenom[15];                                      //L05
    char nom[50];

    printf("Veuillez indiquer votre petit nom : ");
    scanf("%s", prenom);                                  //L08
    printf("Et votre nom ? : ");
    scanf("%s,", nom);
    printf("Ravi de vous saluer, %s %s.\n", prenom, nom);
    return (0);
}
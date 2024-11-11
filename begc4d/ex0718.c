#include <stdio.h>

int main()
{
    char prenom[15];                                      //L05
    char nom[50];

    printf("Veuillez indiquer votre petit nom : ");
    fgets(prenom, 15, stdin);                                  //L08
    printf("Et votre nom ? : ");
    fgets(nom, 15, stdin);
    printf("Ravi de vous saluer, %s %s.\n", prenom, nom);
    return (0);
}
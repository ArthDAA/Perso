#include <stdio.h>

int main()
{
    char prenom[15];                                      //L05

    printf("Veuillez indiquer votre petit nom : ");
    scanf("%s", prenom);                                  //L08
    printf("Ravi de vous saluer, %s.\n", prenom);
    return (0);
}
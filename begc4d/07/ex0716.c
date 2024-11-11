#include <stdio.h>

int main()
{
    char personne[10];                  //L05

    printf("Qui etes vous? ");
    fgets(personne, 10, stdin);         //L08
    printf("Heureux de vous rencontrer, %s.\n", personne);
    return(0);
}
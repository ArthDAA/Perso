#include <stdio.h> 
 
int main() 
{ 
    char personne[4];                 // L05 
 
    printf("Qui etes-vous? "); 
    fgets(personne, 4, stdin);       // L08 
    printf("Heureux de vous rencontrer, %s.\n", personne); 
    return(0); 
}
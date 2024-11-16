#include <stdio.h>

int main()
{
    char code;

    printf("Indiqez le code erreur (1-3) ");
    scanf("%c", &code);

    switch(code)                                                //L10
    {                                                           //L11
        case 'A':
            puts("Erreur disque, vous n'y pouvez rien.");
            break;
        case 'B':
            puts("Format invalide, appelez votre avocat.");
            break;
        case 'C':
            puts("Nom de fichier incorrect, spank it.");
            break;
        default:
            puts("Haha, ni 1, ni 2, ni 3 ?");
    }                                                           //L23
    return (0);
}
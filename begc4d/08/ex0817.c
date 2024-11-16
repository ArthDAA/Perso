#include <stdio.h>

int main()
{
    int code;

    printf("Indiqez le code erreur (1-3) ");
    scanf("%d", &code);

    switch(code)                                                //L10
    {                                                           //L11
        case 1:
            puts("Erreur disque, vous n'y pouvez rien.");
            break;
        case 2:
            puts("Format invalide, appelez votre avocat.");
            break;
        case 3:
            puts("Nom de fichier incorrect, spank it.");
            break;
        default:
            puts("Haha, ni 1, ni 2, ni 3 ?");
    }                                                           //L23
    return (0);
}
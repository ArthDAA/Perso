#include <stdio.h>

void prompt();              // Pototype L03

int main()
{
    int loop;
    char input[32];

    loop = 0;
    while (loop < 5)
    {
        prompt();
        fgets(input, 31, stdin);
        loop++;
    }
    return (0);
}

//Fonction prompt()

void prompt()
{
    printf("C:\\DOS> ");
}
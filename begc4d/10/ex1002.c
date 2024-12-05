#include <stdio.h>

void prompt();

int busy();

int main()
{
    busy();
}

void prompt()
{
    printf("C:\\DOS> ");
}

int busy()
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
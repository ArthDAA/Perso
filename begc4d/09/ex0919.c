#include <stdio.h>

int main()
{
    int cmptr;

    cmptr = 0;
    while(1)                            //L08
    {
        printf("%d, ", cmptr);
        cmptr++;
        if(cmptr > 50)
            break;                      //L13
    }
    putchar('\n');
    return (0);
}
#include <stdio.h>

int main()
{
    int x;
    x = 0;                                          //L06
    while(x < 10)                                   //L07
    {
        printf("%d\t", x + 1); 
        puts("Le saviez-vous?");
        x++;                                        //L11
    }
    return (0);
}
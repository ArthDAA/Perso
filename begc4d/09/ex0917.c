#include <stdio.h>

int main()
{
    int x;
    x = 13;
    do
    {
        printf("%d\t", x + 1); 
        puts("Le saviez-vous?");
        x++;
    } while(x < 10);
    return (0);
}
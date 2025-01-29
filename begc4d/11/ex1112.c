#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0;
    while(i <= 10)
    {
        printf("2^%d = %d\n", i, (int)pow(2, i));
        i++;
    }
}
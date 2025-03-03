#include <stdio.h>
#include <math.h>

int main()
{
    int val1[] = {10, 12, 14, 15, 16, 18, 20};
    float val2[7];
    int i = 0;
    while(val1[i] != '\0')
    {
        val2[i] = sqrt(val1[i]);
        printf("%.2f\n", val2[i]);
        i++;
    }
}
#include <stdio.h>
#define PI 3.14159265359

int main()
{
    float degres, radians;

    printf("Indiquez un angle en radians : ");
    scanf("%f", &radians);
    degres = radians * (180 / PI);
    printf("%.2f radians valent %.2f degres.\n", radians, degres);
    return 0;
}

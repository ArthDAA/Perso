#include <stdio.h>

float convertir(float f);
int main()
{
    float temp_f, temp_c;

    printf("Temperature em Fahrenheit: ");
    scanf("%f", &temp_f);
    temp_c = convertir(temp_f);
    printf("%1.1fF vaut %1.1fC\n", temp_f, temp_c);
    return (0);
}

float convertir(float f)
{
    float t;

    t = (f - 32) / 1.8;
    return (t);
}
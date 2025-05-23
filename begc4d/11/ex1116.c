#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define LONGUEURONDE 80
#define PERIODE .1

int main()
{
    float graph, s, x;

    for(graph = 0; graph < 2 * PI; graph += PERIODE)
    {
        s = cos(graph);
        for(x = 0; x < s*LONGUEURONDE; x++) 
            putchar('*');
        putchar('\n');
    }
    return (0);
}

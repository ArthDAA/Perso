#include <stdio.h>

int main()
{
    int alpha, beta, gamma;

    for(alpha = 'A'; alpha <= 'Z'; alpha++)
    {
        for(beta = 'A'; beta <= 'Z'; beta++)
        {
            for(gamma = 'A'; gamma <= 'Z'; gamma++)
            {
                printf("%c%c%c\n", alpha, beta, gamma);
            }
        }
    }
    return (0);
}

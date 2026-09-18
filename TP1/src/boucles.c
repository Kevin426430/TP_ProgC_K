#include <stdio.h>

int main()
{
    int compteur = 8;

    for (int i = 1; i <= compteur; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 3 && j > 1)
                printf("# ");
            else
                printf("* ");
        }

        printf("\n");
    }

    return 0;
}
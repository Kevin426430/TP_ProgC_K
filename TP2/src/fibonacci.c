#include <stdio.h>

int main()
{
    int n = 7;
    int a = 0;
    int b = 1;
    int suivant;

    for (int i = 0; i <= n; i++)
    {
        printf("%d", a);

        if (i < n)
            printf(", ");

        suivant = a + b;
        a = b;
        b = suivant;
    }

    printf("\n");

    return 0;
}
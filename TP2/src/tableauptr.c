#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tableauInt[10];
    float tableauFloat[10];

    int *ptrInt = tableauInt;
    float *ptrFloat = tableauFloat;

    srand(time(NULL));

    // Remplissage des tableaux
    for (int i = 0; i < 10; i++)
    {
        *(ptrInt + i) = rand() % 100;
        *(ptrFloat + i) = (float)(rand() % 100) / 10;
    }

    // Affichage avant modification
    printf("Tableau d'entiers avant :\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(ptrInt + i));
    }

    printf("\n\nTableau de floats avant :\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%.1f ", *(ptrFloat + i));
    }

    // Multiplier par 3 les indices divisibles par 2
    for (int i = 0; i < 10; i += 2)
    {
        *(ptrInt + i) *= 3;
        *(ptrFloat + i) *= 3;
    }

    // Affichage après modification
    printf("\n\nTableau d'entiers apres :\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(ptrInt + i));
    }

    printf("\n\nTableau de floats apres :\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%.1f ", *(ptrFloat + i));
    }

    printf("\n");

    return 0;
}
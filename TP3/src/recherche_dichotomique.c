#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tableau[100];
    int recherche;
    int gauche = 0;
    int droite = 99;
    int milieu;
    int present = 0;

    srand(time(NULL));

    // Remplissage du tableau
    for (int i = 0; i < 100; i++)
    {
        tableau[i] = rand() % 201 - 100;
    }

    // Tri du tableau par ordre croissant
    for (int i = 0; i < 99; i++)
    {
        for (int j = 0; j < 99 - i; j++)
        {
            if (tableau[j] > tableau[j + 1])
            {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    // Affichage du tableau trié
    printf("Tableau trie :\n");

    for (int i = 0; i < 100; i++)
    {
        printf("%d ", tableau[i]);
    }

    printf("\n\n");

    // Demande de l'entier
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &recherche);

    // Recherche dichotomique
    while (gauche <= droite)
    {
        milieu = (gauche + droite) / 2;

        if (tableau[milieu] == recherche)
        {
            present = 1;
            break;
        }
        else if (tableau[milieu] < recherche)
        {
            gauche = milieu + 1;
        }
        else
        {
            droite = milieu - 1;
        }
    }

    // Résultat
    if (present == 1)
        printf("Resultat : entier present\n");
    else
        printf("Resultat : entier absent\n");

    return 0;
}
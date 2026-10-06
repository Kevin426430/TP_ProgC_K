#include <stdio.h>

int main()
{
    char phrases[10][100] = {
        "Bonjour, comment ca va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journee.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent etre deroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est interessante.",
        "Les structures de donnees sont importantes.",
        "Programmer en C, c'est genial."
    };

    char recherche[100];
    int trouve = 0;

    printf("Entrez la phrase a rechercher : ");
    fgets(recherche, 100, stdin);

    // Supprimer le retour a la ligne
    int longueur = 0;

    while (recherche[longueur] != '\0')
    {
        if (recherche[longueur] == '\n')
        {
            recherche[longueur] = '\0';
            break;
        }

        longueur++;
    }

    // Parcours des 10 phrases
    for (int i = 0; i < 10; i++)
    {
        int j = 0;

        // Comparaison caractère par caractère
        while (phrases[i][j] == recherche[j] &&
               phrases[i][j] != '\0' &&
               recherche[j] != '\0')
        {
            j++;
        }

        // Si les deux chaînes se terminent en même temps
        if (phrases[i][j] == '\0' && recherche[j] == '\0')
        {
            trouve = 1;
            break;
        }
    }

    if (trouve == 1)
        printf("Phrase trouvee\n");
    else
        printf("Phrase non trouvee\n");

    return 0;
}
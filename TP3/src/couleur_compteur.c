#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Couleur
{
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct CouleurDistincte
{
    struct Couleur couleur;
    int nombre;
};

int main()
{
    struct Couleur couleurs[100];
    struct CouleurDistincte distinctes[100];

    int nombreDistinctes = 0;

    srand(time(NULL));

    // Remplissage du tableau avec 100 couleurs
    for (int i = 0; i < 100; i++)
    {
        couleurs[i].r = rand() % 256;
        couleurs[i].g = rand() % 256;
        couleurs[i].b = rand() % 256;
        couleurs[i].a = 255;
    }

    // Recherche des couleurs distinctes
    for (int i = 0; i < 100; i++)
    {
        int trouve = 0;

        for (int j = 0; j < nombreDistinctes; j++)
        {
            if (couleurs[i].r == distinctes[j].couleur.r &&
                couleurs[i].g == distinctes[j].couleur.g &&
                couleurs[i].b == distinctes[j].couleur.b &&
                couleurs[i].a == distinctes[j].couleur.a)
            {
                distinctes[j].nombre++;
                trouve = 1;
                break;
            }
        }

        // Nouvelle couleur
        if (trouve == 0)
        {
            distinctes[nombreDistinctes].couleur = couleurs[i];
            distinctes[nombreDistinctes].nombre = 1;
            nombreDistinctes++;
        }
    }

    // Affichage des couleurs distinctes
    printf("Couleurs distinctes :\n\n");

    for (int i = 0; i < nombreDistinctes; i++)
    {
        printf("%02x %02x %02x %02x : %d\n",
               distinctes[i].couleur.r,
               distinctes[i].couleur.g,
               distinctes[i].couleur.b,
               distinctes[i].couleur.a,
               distinctes[i].nombre);
    }

    printf("\nNombre de couleurs distinctes : %d\n", nombreDistinctes);

    return 0;
}
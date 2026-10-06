#include <stdio.h>

int main()
{
    char chaine1[] = "Hello";
    char chaine2[] = " World!";

    char copie[100];
    char concat[100];

    int longueur = 0;
    int i = 0;
    int j = 0;

    // Calcul de la longueur de chaine1
    while (chaine1[longueur] != '\0')
    {
        longueur++;
    }

    printf("Longueur de chaine1 : %d\n", longueur);

    // Copie de chaine1 dans copie
    while (chaine1[i] != '\0')
    {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0';

    printf("Copie : %s\n", copie);

    // Concaténation de chaine1 et chaine2
    i = 0;

    while (chaine1[i] != '\0')
    {
        concat[i] = chaine1[i];
        i++;
    }

    while (chaine2[j] != '\0')
    {
        concat[i] = chaine2[j];
        i++;
        j++;
    }

    concat[i] = '\0';

    printf("Concaténation : %s\n", concat);

    return 0;
}
#include <stdio.h>

int main()
{
    char noms[5][20] = {
        "Dupont Jean",
        "Martin Alice",
        "Durand Paul",
        "Bernard Emma",
        "Petit Lucas"
    };

    char adresses[5][50] = {
        "10 rue de Paris",
        "25 avenue Victor Hugo",
        "8 rue Pasteur",
        "12 boulevard Gambetta",
        "5 rue de la Republique"
    };

    float notesC[5] = {15.5, 12.0, 17.5, 14.0, 10.5};
    float notesSysteme[5] = {14.0, 13.5, 16.0, 15.5, 11.0};

    for (int i = 0; i < 5; i++)
    {
        printf("Etudiant %d\n", i + 1);
        printf("Nom et prenom : %s\n", noms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.1f\n", notesC[i]);
        printf("Note Systeme d'exploitation : %.1f\n", notesSysteme[i]);
        printf("-----------------------------\n");
    }

    return 0;
}
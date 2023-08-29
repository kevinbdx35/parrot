#include <string.h>
#include <time.h>

#include "header.h"

#define MAX 1000

void menu(void)
{
    printf("\n\n\nBIENVENUE SUR LE SYSTEME DE CHIFFREMENT PERROQUET");

    int choice;
    char parrot = "";


do
    {
        printf("\n\n\n1. Choix du texte source\n");
        printf("2. Choix du perroquet\n");
        printf("3. Lire le perroquet\n");
        printf("4. Lire le resultat chiffré\n");
        printf("5. Lire et déchiffrer le résultat\n");
        printf("6. Quitter\n\n\n");

        printf("Entrez votre choix :  ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                source();
                break;

            case 2:
                perroquet();
                break;

            case 3:
                lire_perroquet(parrot);
                break;

            case 4:
                lire_result();
                break;

            case 5:
                decryt();
                break;

            case 6:
                break;

            default:
                printf("\n\n\nOups! Il y a eu une erreur\n\n\n");
        }

    }
     while (choice != 6);;

}






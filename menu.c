#include <string.h>
#include <time.h>

#include "header.h"

void menu(void)
{
    printf("\n\n\nBIENVENUE SUR LE SYSTEME DE CHIFFREMENT PERROQUET\n\n\n");

    int choice;


        printf("1. Choix du texte source\n");
        printf("2. Choix du perroquet\n");
        printf("3. Lire le perroquet\n");
        printf("4. Lire le resultat\n");
        printf("5. Exit\n\n\n");
do
    {
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
                lire_perroquet();
                break;

            case 4:
                result();
                break;

            case 5:
                exit(0);

            default:
                printf("\n\n\nOups! Il y a eu une erreur\n\n\n");
        }

    }
     while (choice < 1 || choice > 5);;

    return 0;
}

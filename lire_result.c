#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "header.h"

#define TAILLE_MAX 1000


void lire_result(void)
{

    char chaine_result[TAILLE_MAX]="";

    // OPEN TXT FILE
    FILE *file = fopen("dest.crt", "r+");

    if (!file)
    {
        printf("Erreur lors de l'ouverture d'un fichier");
        exit(1);
    }

    // READ DATA OF FILE
    fgets(chaine_result, TAILLE_MAX, file);

    // PRINT THESE DATA
    printf("Le mot chiffré est : %s", chaine_result);

    // CLOSE FILE
    fclose(file);
}


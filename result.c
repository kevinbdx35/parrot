#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "header.h"

#define TAILLE_MAX 1000


void result(void)
{
    // OPEN TXT FILE
    FILE *file = fopen("dest.crt", "w+");

    if (!file)
    {
        printf("Erreur lors de l'ouverture d'un fichier");
        exit(1);
    }

    // GET THE TEXT OR WORD FROM CRYPT
    char resulta[TAILLE_MAX]="";
    //char *titi = crypt();

    // PRINT TO FILE
    fprintf(file, "%s\n", "lalalala");

    // CLOSE FILE
    fclose(file);
}


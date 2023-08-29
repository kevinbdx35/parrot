#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "header.h"


void source(void)
{
    // OPEN TXT FILE
    FILE *file = fopen("source.txt", "w+");

    if (!file)
    {
        printf("Erreur lors de l'ouverture d'un fichier");
        exit(1);
    }

    // GET THE TEXT OR WORD TO CRYPT
    char phrase[100];

    printf("Veuillez entrer le mot ou la phrase à chiffrer : \n");
    //gets(phrase);

    fgets(phrase, 100, stdin);

    // PRINT TO FILE
    fprintf(file, "%s\n", phrase);

    // CLOSE FILE
    fclose(file);

    return 0;
}


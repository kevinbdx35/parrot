
#include "header.h"

#include <string.h>
#include <time.h>

#define TAILLE_MAX 1000

void lire_source(char *source)
{

    char chaine_source[TAILLE_MAX]="";

    // OPEN TXT FILE
    FILE *file = fopen("source.txt", "r");

    if (!file)
    {
        printf("Erreur lors de l'ouverture d'un fichier");
        exit(1);
    }


    // READ DATA OF FILE
    fgets(chaine_source, TAILLE_MAX, file);

    // PRINT THESE DATA
    printf("%s", chaine_source);

    strcpy(source, chaine_source);

    // CLOSE FILE
    fclose(file);
}

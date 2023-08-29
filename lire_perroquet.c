
#include "header.h"

#include <string.h>
#include <time.h>

#define TAILLE_MAX 1000

char *lire_perroquet(void)
{

    char chaine_perroquet[TAILLE_MAX]="";

    // OPEN TXT FILE
    FILE *file = fopen("peroq.def", "r");

    if (!file)
    {
        printf("Erreur lors de l'ouverture d'un fichier");
        exit(1);
    }


    // READ DATA OF FILE
    fgets(chaine_perroquet, TAILLE_MAX, file);

    // PRINT THESE DATA
    printf("Le mot perroquet est : %s", chaine_perroquet);

    // CLOSE FILE
    fclose(file);

    return chaine_perroquet;
}

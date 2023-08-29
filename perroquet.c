#include "header.h"

#include <string.h>
#include <time.h>

void perroquet(void)
{
    // OPEN TXT FILE
    FILE *file = fopen("peroq.def", "w+");

    if (!file)
    {
        printf("Erreur lors de l'ouverture d'un fichier");
        exit(1);
    }


    // GET THE WORD OF PERROQUET
    char parrot[100];

    printf("Veuillez entrer le mot clef du \"PERROQUET\" : \n");
    //gets(parrot);


    fgets(parrot, 100, stdin);
    printf("Le mot du \"PERROQUET\" est : %s", parrot);

    // PRINT TO FILE
    fprintf(file, "%s\n", parrot);

    // CLOSE FILE
    fclose(file);

    return 0;


}


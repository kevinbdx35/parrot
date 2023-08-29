#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "header.h"

#define TAILLE_MAX 1000


void result(void)
{
    // OPEN TXT FILE
    FILE *file = fopen("dest.crt", "rw+");

    if (!file)
    {
        return 1;
    }

    // GET THE TEXT OR WORD FROM CRYPT
    //char resulta[100];
    char resulta[TAILLE_MAX]="";

    // PRINT TO FILE
    fprintf(file, "%s\n", crypt());

     // READ DATA OF FILE
    fgets(resulta, TAILLE_MAX, file);

    // PRINT THESE DATA
    printf("%s", resulta);

    // CLOSE FILE
    fclose(file);

    return 0;
}


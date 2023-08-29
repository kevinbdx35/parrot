#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "header.h"


void result(void)
{
    // OPEN TXT FILE
    FILE *file = fopen("dest.crt", "w+");

    if (!file)
    {
        return 1;
    }

    // GET THE TEXT OR WORD FROM CRYPT
    char result[100];




    // PRINT TO FILE
    fprintf(file, "%s\n", result);

    // CLOSE FILE
    fclose(file);

    return 0;
}


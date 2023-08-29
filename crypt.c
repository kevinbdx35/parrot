
#include "header.h"

#include <string.h>
#include <time.h>

#define MAX 100

char *crypt(void)
{
    // GET THE WORD OF PERROQUET
    char buffer[MAX];

    char *source;
    const char *parrot;
    lire_source(source);
    parrot = lire_perroquet();


    char *mask = NULL;

    int length = 0;

    printf("%s %s\n", source, parrot);

    length = abs(strlen(source) - strlen(parrot));
    printf("%i\n", length);




    strncpy(buffer, parrot, length);

    for(int j = 1; j < length; j++)
    {
        strncat(buffer, parrot, length);
    }


    printf("%s\n\n\n", buffer);


    for(int i = 0, m = strlen(source); i < m ; i++)
    {

        char *x = NULL;
        x = source[i];
        char *y = NULL;
        y = buffer[i];


        mask = abs(x - y);

        swappy(&x, &y);

        printf("%c", x);

        //printf("\nle mask est %i", mask);
    }



//char *resulta = "WOUUUUUU";

//printf("\n\n\n\n%s", );

return buffer;
}

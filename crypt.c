
#include "header.h"

#include <string.h>
#include <time.h>

#define MAX 100

char *crypt(void)
{
    // GET THE WORD OF PERROQUET
    const char *phrase;
    const char *parrot;
    phrase = lire_source();
    parrot = lire_perroquet();


    char *mask = NULL;

    int length = 0;

    printf("%s %s\n", phrase, parrot);

    length = abs(strlen(phrase) - strlen(parrot));
    printf("%i\n", length);


    char buffer[MAX];

    strncpy(buffer, parrot, length);

    for(int j = 1; j < length; j++)
    {
        strncat(buffer, parrot, length);
    }


    printf("%s\n\n\n", buffer);


    for(int i = 0, m = strlen(phrase); i < m ; i++)
    {

        char *x = NULL;
        x = phrase[i];
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

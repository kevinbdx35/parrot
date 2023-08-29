
#include "header.h"

#include <string.h>
#include <time.h>

#define MAX 1000

void crypt(char *resultat)
{
    const char *source;
    const char *parrot;

    lire_source(source);
    lire_perroquet(parrot);

    int perroquetLength = strlen(parrot);
    int sourceLength = strlen(source);

    printf("%s %s\n", source, parrot);

   for (int i = 0; i < sourceLength; i++) {
        resultat[i] = (source[i] + parrot[i % perroquetLength]) % 256;
    }

    resultat[sourceLength] = '\0';
}

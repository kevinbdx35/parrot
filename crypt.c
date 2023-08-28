
#include "header.h"

#include <string.h>
#include <time.h>

void crypt(void)
{

    // GET THE WORD OF PERROQUET
    char *parrot="toto";
    char *phrase="titi mange";

    printf("%s %s\n", parrot, phrase);


    for(int i = 0, m =strlen(phrase); i < m ; i++)
    {
        for(int j = 0, n =strlen(parrot); j < n ; j++)

            {
               printf("%c", phrase[i]);
               printf("%c", parrot[j]);
            }
    }


}

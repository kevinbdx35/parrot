
#include "header.h"

#include <string.h>
#include <time.h>

void crypt(void)
{

    // GET THE WORD OF PERROQUET
    char *phrase= "HI!DD";
    char *parrot="toto";

    printf("%s %s\n", phrase, parrot);

    for(int i = 0, m = strlen(phrase); i < m ; i++)
    {

        char *x = NULL;
        x = phrase[i];
        char *y = NULL;
        y = parrot[i];
        char *mask = NULL;

        mask = abs(x - y);

        swappy(&x, &y);

        printf("%c\n", x);
        printf("%i\n", mask);

    }






}

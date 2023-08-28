
#include "header.h"

#include <string.h>
#include <time.h>

void crypt(void)
{

    // GET THE WORD OF PERROQUET
    char *phrase= "HI!HI!HI!";
    char *parrot="tata";

    printf("%s %s\n", phrase, parrot);

    for(int i = 0, m = strlen(phrase); i < m ; i++)
    {

        char *x = NULL;
        x = phrase[i];
        char *y = NULL;
        y = parrot[i];
        swappy(&x, &y);
        printf("%c\n", x);

    }






}

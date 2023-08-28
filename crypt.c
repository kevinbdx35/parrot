
#include "header.h"

#include <string.h>
#include <time.h>

#define MAX 100

void crypt(void)
{

    // GET THE WORD OF PERROQUET
    char *phrase= "HI!HI!HI!!!!!!!!!!!!!!!!!!";
    char *parrot="toto";

    char *mask = NULL;



    int length = 0;

    printf("%s %s\n", phrase, parrot);

    length = abs(strlen(phrase) - strlen(parrot));
    printf("%i\n", length);


    char buffer[MAX];
    for(int j = 1; j < length, j++)
    {
        strncat(strcpy(buffer, parrot), parrot, length);
    }


    printf("%s\n", buffer);


    for(int i = 0, m = strlen(phrase); i < m ; i++)
    {

        char *x = NULL;
        x = phrase[i];
        char *y = NULL;
        y = buffer[i];


        mask = abs(x - y);

        swappy(&x, &y);

        printf("%c", x);
        printf("\nle mask est %i", mask);
        }

}

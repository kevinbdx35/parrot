#include "header.h"

#include <string.h>
#include <time.h>

void perroquet(void)
{

    // GET THE WORD OF PERROQUET
    char parrot[100];

    printf("Veuillez entrer le mot clef du \"PERROQUET\" : \n");
    fgets(parrot, 100, stdin);
    printf("Le mot du \"PERROQUET\" est : %s", parrot);


}


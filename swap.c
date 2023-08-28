#include "header.h"

#include <string.h>
#include <time.h>

void swappy(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

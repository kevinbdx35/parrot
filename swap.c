#include "header.h"

#include <string.h>
#include <time.h>

void swappy(int *a, int *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

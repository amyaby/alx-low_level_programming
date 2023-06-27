#include "main.h"
#include <string.h>

/**
* puts2 - puts2 function
* @str: str parameter
*/
void puts2(char *str)
{
	int length, u;

	length = strlen(str);
	for (u = 0; u < length; u += 2)
		_putchar(str[u]);
	_putchar('\n');
}

#include "main.h"

/**
* rev_string - function that reverses a string.
* @s: a reversed string
*/

void rev_string(char *s)
{
	int leng, i;
	char x;

	for (len = 0; s[leng] != '\0'; leng++)
	;
	for (a = 0; a < length / 2; a++)
	{
		x = s[a];
		s[i] = s[leng - 1 - a];
		s[len - 1 - a] = x;
	}
}

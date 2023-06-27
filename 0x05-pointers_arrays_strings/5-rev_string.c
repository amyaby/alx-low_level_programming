#include "main.h"

/**
* rev_string - function that reverses a string.
* @s: a reversed string
*/

void rev_string(char *s)
{
	int leng, a;
	char x;

	for (len = 0; s[leng] != '\0'; leng++)
	;
	for (a = 0; a < leng / 2; a++)
	{
		x = s[a];
		s[a] = s[leng - 1 - a];
		s[len - 1 - a] = x;
	}
}

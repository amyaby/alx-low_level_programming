#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int length = 0;
	int i;

	for (s[length] != '\0' ; length++)

	for (i = 0; i < length; i++)
	{
		length--;
		rev = s[i];
		s[i] = s[length];
		s[length] = rev;
	}
}


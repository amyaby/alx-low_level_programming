#include "main.h"

/**
* cap_string -> capitalization function
* @x: string param
* Return: capitalized version of the string
*/

char *cap_string(char *x)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int length = 13;
	int b = 0, j;

	while (x[b])
	{
		j = 0;
		while (j < length)
		{
			if ((b == 0 || x[b - 1] == spc[j]) && (x[b] >= 97 && x[b] <= 122))
				x[b] = x[b] - 32;
			j++;
		}
		b++;
	}
	return (x);
}

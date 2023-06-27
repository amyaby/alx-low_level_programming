#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int j, m, len;

	leng = 0;

	for (j = 0; str[j] != '\0'; j++)
		leng++;

	n = (leng / 2);

	if ((leng % 2) == 1)
		n = ((leng + 1) / 2);

	for (j = n; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}

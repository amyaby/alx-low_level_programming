#include "main.h"

/**
* puts_half - print half of a string,
* @str: the string to print
*/
void puts_half(char *str)
{
	int a, b, c;

	a = strlen(str);
	if (a % 2 == 1)
		b = a / 2 + 1;
	else
		b = a / 2;
	for (c = b; c < a; i++)
		_putchar(str[c]);
	_putchar('\n');
}

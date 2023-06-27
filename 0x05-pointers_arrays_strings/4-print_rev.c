#include "main.h"

/**
* print_rev - function that prints a string,
* in reverse, followed by a new line.
* @s: the string
*/
void print_rev(char *s)
{
int length = 0;

for (length = 0; s[length]; length++)

for (int i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

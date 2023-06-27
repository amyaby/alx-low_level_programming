#include "main.h"

/**
* print_rev - function that prints a string,
* in reverse, followed by a new line.
* @s: the string
*/
void print_rev(char *s)
{
int length = 0;
int i;

for (; s[length]; length++)

for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

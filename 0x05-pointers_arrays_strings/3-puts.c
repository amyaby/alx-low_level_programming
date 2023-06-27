#include "main.h"

/**
 * _puts - a function that prints a string 
 *followed by a new line
 * @str: string input
 * Return: string
 */
void _puts(char *str)
{
	int A;

	for (A = 0; str[A] != '\0'; A++)
	{
		_putchar(str[A]);
	}
	_putchar('\n');
}

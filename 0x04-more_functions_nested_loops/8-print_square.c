#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of width and length
 * Returen: a square made of '#'
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			_putchar('#');
			for (y = 2; y <= size; y++)
			{
				putchar('#');
			}
			_putchar('\n');
		}
	}
}

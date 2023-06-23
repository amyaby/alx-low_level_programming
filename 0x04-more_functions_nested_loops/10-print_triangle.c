#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int j, i;

		for (j = 1; j <= size; j++)
		{
			for (i = j; i < size; i++)
			{
				_putchar(' ');
			}

			for (i = 1; i <= j; i++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

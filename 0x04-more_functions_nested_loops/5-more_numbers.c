#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int y, x;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 15; j++)
		{
			if (x > 9)
				_putchar(x / 10 + 48);
			_putchar(x % 10 + 48);
		}
		_putchar('\n');
	}
}

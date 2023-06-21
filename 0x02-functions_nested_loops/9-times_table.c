#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int j, i, k;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			k = i * j;
			if (i == 0)
			{
				_putchar(x + '0');
			}

			if (x < 10 && i != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			} else if (x >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

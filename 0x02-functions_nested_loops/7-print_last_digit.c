#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int y;

	if (n < 0)
		n = -n;

	y = n % 10;

	if (y < 0)
		y = -y;

	_putchar(y + '0');

	return (y);
}

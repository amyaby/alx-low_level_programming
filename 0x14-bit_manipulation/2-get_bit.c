#include "main.h"

/**
 * get_bit - func that returns the value of a bit at a given index.
 * @index: index of bit.
 * @n: integer.
 * Return: the bit value or -1 if an error is occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}

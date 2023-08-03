#include "main.h"

/**
 * get_bit - func that returns the value of a bit at an index
 * @index: index of bit.
 * @n: integer.
 *
 * Return: the bit value or -1 if error occured.
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;
	if (index > 63)
		return (-1);
	bit_value = (n >> index) & 1;
	return (bit_value);
}

#include "main.h"

/**
 * flip_bits - func that returns no. of bits needed to flip to get,
 * from one number to another.
 * @n: unsigned long integer.
 * @m: unsigned long integer.
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int XOR_nm = n ^ m;

	while (XOR_nm)
	{
		XOR_nm = XOR_nm & (XOR_nm - 1);
		count++;
	}
	return (count);
}
